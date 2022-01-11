 #include<iostream>
 using namespace std;
 int n=5,top=-1;

int stack[5];
void push(int val)
{
	if(top>=n-1)
	{
		cout<<"over flow";
		
	}
	else
	{
		top++;
		stack[top]=val;
	}
	}
	void pop()
	{
		if(top<=-1)
		{
			cout<<"underflow";
		}
		else
		{
			cout<<"the poppeed elementis"<<stack[top]<<endl;
			top--;
		}
		}
		void display()
		{
			if (top>=0)
			{
				cout<<"stack element are";
				for(int i=top;i>=0;i--)
				{
					cout<<stack[i];
					cout<<endl;
				}
				}
				else
				{
					cout<<"stack is empty"<<endl;
				}
				}
				
	int main()	{
	int choice,val;
	cout<<"push in stack"<<endl;
	cout<<"pop in stack"<<endl;
	cout<<"display stack"<<endl;
	cout<<"exist"<<endl;
	do
	{
		cout<<"enter the choice"<<endl;
		cin>>choice;
		switch(choice){
			case 1:
				{
					cout<<"enter the value pushed"<<endl;
					cin>>val;
					push(val);
					break;
				}
				case 2:
				{
				pop();	
					break;
				}
				case 3:
					{
						display();
						break;
					}
		case 4:
			{
				cout<<"exit"<<endl;
				break;
			}
			default:
				{
					cout<<"invalid choice"<<endl;
					break;
			}
			}
			}
					while(choice!=4);
					return 0;
				
	}
			
			

		
	

