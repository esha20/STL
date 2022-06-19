#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
	int n,m,re;
	vector<int> first;
	//can also initiallise the vector like this ?
	vector <int> second (5,1);
	//initialises the vector second with size 5 and values 1.
	cout<<"Enter the number of elements to be inserted : ";
	cin>>m;
	for (int i=0;i<m;i++)
	{
	cout<<"Enter the element to be inserted in the vector : ";
	cin>>n;
	first.push_back(n);		//to add elements in the array dynamically
	}
	for(auto& i :first)
	{
		cout<<i<<" ";
	}
	cout<<"\n";
	cout<<"Front element: "<<first.front()<<"\n";		//returns the first element in the array
	cout<<"Back element : "<<first.back()<<"\n";		//returns the last element in the array
	
	cout<<"Size : "<<first.size()<<"\n";				//returns the size of the array ie the number of elements in the array
	cout<<"Capacity : "<<first.capacity()<<"\n";		//returns the size of the storage space currently allocated to the array
	cout<<"Max size : "<<first.max_size()<<"\n";		//return the maximum number of elements that the vector can hold. tells the total current capacity of system.
	cout<<"Empty ? : "<<first.empty()<<"\n";			//returns if the array is empty or not. 0 meaning false and 1 meaning true.
	
	cout<<"Enter the value you want to resize the array to : ";
	cin >> re;
	first.resize(re);
	cout<<"\nnew size : "<<first.size();					
	
	/* if you resize the vector to some size n , if n is greater than the current size, it resizes to size n and if n is less than the current size, the vector is resized and 
	extra elements are deleted. */
	/*Suppose n is greater than the current size of vector and we resize it. then resize (int n ,int val) where n is the size it is to be resized to and val is the value it is 
	to be resized to.*/
	
	cout <<"\nWe have now applied shrink to fit, here the vector shrinks to the size till which the elements are.";
	//first.shrink_to_fit();
	cout<<"\nNew capacity : "<<first.capacity();
	
	cout<<"\nEnter the index of the element you want to know  :" ;
	int in;
	cin>>in;	
	cout<<first.at(in);
	
	vector <int> :: iterator it;	//making a iterator to vector
	it = first.begin();				//initialising the iterator
	
	cout<<"\nerasing the first element of vetor using erase function : ";
	first.erase(it);
	first.clear();		//clear makes the size 0 but capacity remains same
	cout<<"\nAfter clear : ";
	cout<<"\nsize :"<<first.size();
	cout<<"\nCapacity : "<<first.capacity();
	
	/*emblace(iterator or the place where the element to be inserted,value to insert). */

	cout<<"\nEnter the new element to insert using emplace : ";
	int ab;
	cin>>ab;
	cout<<"\nInserting at beginning : ";
	first.emplace(first.begin(),ab);
	
	cout<<"\nThe vector now is : ";
	for(auto& i :first)
	{
		cout<<i<<" ";
	}
	
	cout<<"\nEnter the new element to insert using emplace: ";
	int cd;
	cin>>cd;
	cout<<"\nInserting at end : ";
	first.emplace(first.end(),cd);
	
	cout<<"\nThe vector now is : ";
	for(auto i:first)
	{
		cout<<i<<" ";
	}
	//emplace_back is used to add the element at the back of the vector.
	
	return 0;
}
