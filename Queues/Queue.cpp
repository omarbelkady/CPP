#include<iostream>
#include<queue>

using namespace std;
void showthequeue(queue <int> gq)
{
	queue <int> c = gq;
	while(!c.empty()){
		std::cout<<"\t"<<c.front();
		c.pop();
	}
}

int main(){
	queue <int> numsToQueue;
	numsToQueue.push(63526);
	numsToQueue.push(47);
	numsToQueue.push(2);
	numsToQueue.push(2);
	numsToQueue.push(56837);
	std::cout<<"Here is the queue now go learn 727225 or a 555 because 968 56837 LLP"<<std::endl;
	showthequeue(numsToQueue);
	std::cout<<"\nHere are the number of elements in the queue: "<<numsToQueue.size()<<std::endl;
	std::cout<<"Here is the first element in the queue. Queues are FIFO: "<<numsToQueue.front()<<std::endl;
	std::cout<<"Here is the back element in the queue: "<<numsToQueue.back()<<std::endl;
	std::cout<<"Removing an element 968 LLP 56837: \n"<<std::endl;
	numsToQueue.pop();
	showthequeue(numsToQueue);
	std::cout<<"\n Now 2-56837 46 Learn Pascal"<<std::endl;
	return 0;
}



