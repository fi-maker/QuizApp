#include<iostream>
using namespace std;
void quiz()
{
	string name;
	string rollno;
	
	cout<<"Enter your name: ";
     cin>>name;
	cout<<"Enter your rollno:";
	cin>>rollno;
	cout<<endl;
	
	int a, b=0;
	string l;
	cout<<"Press 1 to start the quiz."<<endl;
	cin>>a;
	if(a==1)
	{
        cout<<"Q#01: which is data stureture from the following."<<endl;
		cout<<"a.for loop\nb.if statement\nc.Max-heap\nd.arrays"<<endl;
		cout<<"Choose your answer:";
		cin>>l;
		if(l=="c")
		b++;
		cout<<endl;
		
		cout<<"Q#02: In max heap every node should be greater than or equal to there:"<<endl;
		cout<<"a.Adjacent node\nb.Children node\nc.Last node\nd.Root node"<<endl;
		cout<<"Choose your answer:";
		cin>>l;
		if(l=="b")
		b++;
		cout<<endl;
		
		cout<<"Q#03: What is the average time complexity of insertion in Max-Heap tree:"<<endl;
		cout<<"a.O(log n)\nb.O(1)\nc.O(n square)\nd.O(n)"<<endl;
		cout<<"Choose your answer:";
		cin>>l;
		if(l=="a")
		b++;
		cout<<endl;
		
		cout<<"Q#04: What is average time complexity of deletion in Max-heap:"<<endl;
		cout<<"a.O(log n)\nb.O(1)\nc.O(n square)\nd.O(n)"<<endl;
		cout<<"Choose your answer:";
		cin>>l;
		if(l=="b")
		b++;
		cout<<endl;
		
		cout<<"Q#05: Which one of the options are limitations of Max-heap:"<<endl;
		cout<<"a.Limited flexibility\nb.Suboptimal for non-maximum element retrieval\nc.Potential memory overhead\nd.All of these"<<endl;
		cout<<"Choose your answer:";
		cin>>l;
		if(l=="d")
		b++;
		cout<<endl;
		
		cout<<"Q#06: Which one of the option is the property of Max-heap:"<<endl;
		cout<<"a.Maximum element at root\nb.Limited flexibility\nc.All of these\nd.none of above"<<endl;
		cout<<"Choose your answer:";
		cin>>l;
		if(l=="c")
		b++;
		cout<<endl;
		
		cout<<"Q#07: Max-Heap is a ---------- tree."<<endl;
		cout<<"a.Binary search tree\nb.Complete binary tree\nc.binary tree\nd.none of these"<<endl;
		cout<<"Choose your answer:";
		cin>>l;
		if(l=="b")
		b++;
		cout<<endl;
		
		cout<<"Q#08: Which one of the option is the application of Max-heap:"<<endl;
		cout<<"a.Priority queue\nb.Job scheduling\nc.both a and b\nd.none of above"<<endl;
		cout<<"Choose your answer:";
		cin>>l;
		if(l=="c")
		b++;
		cout<<endl;
		
		cout<<"Q#09: Which one of the option is the advantages of max-heap:"<<endl;
		cout<<"a.Efficiently retrieve maximum element.\nb.Facilitates quick sorting (heap sort).\nc.Ideal for priority queue implementation.\nd.All of above"<<endl;
		cout<<"Choose your answer:";
		cin>>l;
		if(l=="d")
		b++;
		cout<<endl;
		
		cout<<"Q#10: Which one of the option is the disadvantages of max-heap:"<<endl;
		cout<<"a.Inefficient for finding non-maximum Elements\nb.Additional memory overhead\nc.Facilitates quick sorting (heap sort).\nd.both a and b"<<endl;
		cout<<"Choose your answer:";
		cin>>l;
		if(l=="d")
		b++;
		cout<<endl;
		
		cout<<"--------------------"<<endl;
		cout<<"Your Score"<<endl;
		cout<<"--------------------"<<endl;
		cout<<"Name: ";
		cout<<name<<endl;
		cout<<"Roll no: ";
		cout<<rollno<<endl;
		cout<<"Score: ";
		cout<<b<<" out of 10";
		cout<<endl;
		cout<<"--------------------"<<endl;
}
}
 

int quizlogin(int a,int b)
{

     if(a==123 && b==333)
	{
		cout<<"you are login!";
		 quiz();
	}
	
	else
	{
		cout<<"your username and password is incorrect.";
	}
	
	return  a, b;
}



int main()
{
  int c;
  int d;
  	cout<<"Enter your user name:";
	cin>>c;
	cout<<"Enter your password:";
	cin>>d;
   quizlogin(c, d);	
}
