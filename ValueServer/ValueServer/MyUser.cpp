// MyUser.cpp: 구현 파일
//

#include "pch.h"
#include "ValueServer.h"
#include "MyUser.h"


// MyUser

MyUser::MyUser()
{	
}

MyUser::~MyUser()
{
}


// MyUser 멤버 함수
void MyUser::OnReceive(int nErrorCode)
{
	// TODO: 여기에 특수화된 코드를 추가 및/또는 기본 클래스를 호 출합니다.
	int value;
	Receive(&value, sizeof(int));  // 클라이언트로부터 value를 받아옴

	AfxGetMainWnd()->SetDlgItemInt(IDC_VALUE_EDIT, value);	// 받아온 value를 EDIT 창에 출력함

	value = 1;	// 1을 다시 클라이언트에게 보내주기 위해 value를 1로 setting

	Send(&value, sizeof(int));	// value 값을 클라이언트로 보내줌


	CSocket::OnReceive(nErrorCode);
}


void MyUser::OnClose(int nErrorCode)
{
	// TODO: 여기에 특수화된 코드를 추가 및/또는 기본 클래스를 호출합니다.

	ShutDown(2);	// 데이터를 송수신 중이여도 즉각적으로 종료할 수 있다.
					// 0, 1 ,2
					// 2 = 읽기, 쓰기 모두 무시하겠다. 라는 의미
					// 전송상태이든 수신상태이든 상관없이 무조건 close 하겠다. 라는 뜻

	Close();

	CSocket::OnClose(nErrorCode);
}
