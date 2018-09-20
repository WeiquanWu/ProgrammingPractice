#include<stack>


using namespace std;
template <typename T>
class MyQueue
{
public:
	MyQueue();
	void enqueue();
	T peek();
	T deequeue();
private:
	stack<T> stackNewestOnTop;
	stack<T> oldestOnTop;
};
template <typename T>
void MyQueue::enqueue()
{

}

template <typename T> 
T MyQueue::deequeue()
{

}
template <typename T> 
T MyQueue::peek()
{
	
}

int main(int argc, char const *argv[])
{

	/* code */
	return 0;
}