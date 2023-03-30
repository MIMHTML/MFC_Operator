#include <iostream>
#include <vector>
using namespace std;

// �׷��� ������ ��Ÿ���� Ŭ����
class Vertex {
public:
    int data;  // ������
    vector<Vertex*> edges;  // ������ �������� ����Ű�� �����͵�
    bool visited;  // �湮 ���� ǥ��

    Vertex(int data) {
        this->data = data;
        visited = false;
    }
};

// �׷��� Ŭ����
class Graph {
public:
    vector<Vertex*> vertices;  // �׷��� �������� ����Ű�� �����͵�

    // �׷����� ������ �߰��ϴ� �Լ�
    void addVertex(int data) {
        Vertex* v = new Vertex(data);
        vertices.push_back(v);
    }

    // �׷����� ������ �߰��ϴ� �Լ�
    void addEdge(int data1, int data2) {
        Vertex* v1 = findVertex(data1);
        Vertex* v2 = findVertex(data2);
        if (v1 && v2) {
            v1->edges.push_back(v2);
            v2->edges.push_back(v1);
        }
    }

    // �����Ϳ� �ش��ϴ� ������ ã�Ƽ� �����͸� ��ȯ�ϴ� �Լ�
    Vertex* findVertex(int data) {
        for (Vertex* v : vertices) {
            if (v->data == data) {
                return v;
            }
        }
        return nullptr;
    }

    // �׷����� ���� �켱 Ž���Ͽ� ����ϴ� �Լ�
    void dfs(Vertex* v) {
        v->visited = true;
        cout << v->data << " ";
        for (Vertex* u : v->edges) {
            if (!u->visited) {
                dfs(u);
            }
        }
    }

    // �׷����� �ʺ� �켱 Ž���Ͽ� ����ϴ� �Լ�
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