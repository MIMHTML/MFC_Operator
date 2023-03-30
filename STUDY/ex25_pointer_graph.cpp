#include <iostream>
#include <vector>
using namespace std;

// 그래프 정점을 나타내는 클래스
class Vertex {
public:
    int data;  // 데이터
    vector<Vertex*> edges;  // 인접한 정점들을 가리키는 포인터들
    bool visited;  // 방문 여부 표시

    Vertex(int data) {
        this->data = data;
        visited = false;
    }
};

// 그래프 클래스
class Graph {
public:
    vector<Vertex*> vertices;  // 그래프 정점들을 가리키는 포인터들

    // 그래프에 정점을 추가하는 함수
    void addVertex(int data) {
        Vertex* v = new Vertex(data);
        vertices.push_back(v);
    }

    // 그래프에 간선을 추가하는 함수
    void addEdge(int data1, int data2) {
        Vertex* v1 = findVertex(data1);
        Vertex* v2 = findVertex(data2);
        if (v1 && v2) {
            v1->edges.push_back(v2);
            v2->edges.push_back(v1);
        }
    }

    // 데이터에 해당하는 정점을 찾아서 포인터를 반환하는 함수
    Vertex* findVertex(int data) {
        for (Vertex* v : vertices) {
            if (v->data == data) {
                return v;
            }
        }
        return nullptr;
    }

    // 그래프를 깊이 우선 탐색하여 출력하는 함수
    void dfs(Vertex* v) {
        v->visited = true;
        cout << v->data << " ";
        for (Vertex* u : v->edges) {
            if (!u->visited) {
                dfs(u);
            }
        }
    }

    // 그래프를 너비 우선 탐색하여 출력하는 함수
    void bfs(Vertex* v) {
        vector<Vertex*> queue;
        queue.push_back(v);
        v->visited = true;
        while (!queue.empty()) {
            Vertex* u = queue.front();
            queue.erase(queue.begin());
            cout << u->data << " ";
            for (Vertex* w : u->edges) {
                if (!w->visited) {
                    queue.push_back(w);
                    w->visited = true;
                }
            }
        }
    }
};

int main() {
    Graph g;
    g.addVertex(1);
    g.addVertex(2);
    g.addVertex(3);
    g.addVertex(4);
    g.addVertex(5);

    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 4);
    g.addEdge(3, 4);
    g.addEdge(4, 5);

    cout << "Depth First Search: ";
    g.dfs(g.findVertex(1));
    cout << endl;

    cout << "Breadth First Search: ";
    g.bfs(g.findVertex(1));
    cout << endl;

    return 0;
}