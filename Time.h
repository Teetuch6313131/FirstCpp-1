class Time{
int h,m,s;
public:
void getTime();
void display();
Time operator-(Time);
};
void Time::getTime(){
while(h>=24||h<0||m>=60||m<0||s>=60||s<0)
  {
  cout << " ";
  cin >>h>>m>>s;
  if(h>=24||h<0||m>=60||m<0||s>=60||s<0)
  {
    cout << "wrong time\n";
  }
  

  }
}
void Time::display()
{
cout<<"Time diff is ";
	cout<<setfill('0')<<setw(2)<<h<<":";
	cout<<setfill('0')<<setw(2)<<m<<":";
	cout<<setfill('0')<<setw(2)<<s;

}
Time Time::operator-(Time b)
{
  Time c;
  c.h=h-b.h;
  c.m=m-b.m;
  c.s=s-b.s;
  if(c.s<0)
  {
    c.s+=60;
    c.m-=1;
  }
  if(c.m<0)
  {
    c.m+=60;
    c.h-=1;
  }
  if(c.h<0)
  {
    c.h+=24;
  }
  return c;
  
}


//	Write function to getTime;
//	Write function to subtract;
