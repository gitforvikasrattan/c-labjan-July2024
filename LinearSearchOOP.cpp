#include<iostream>
using namespace std;
class search
{
   int a[60];
   int item;
   int size;


   public:
       int pos;
   int status; // 0 means not found
       void inputArray(int n)
       {
           int i;
           size = n;
           for(i=0; i<size; i++)
              cin>>a[i];
       }

      void ls(int data)
      {
          int i;
          item = data;
          for(i = 0; i<size; i++)
          {
              if (a[i] == item)
                {
                    pos = i+1;
                    status = 1;
                    break;
                }
          }
      }

};

int main()
 {
     search ob1;
     int n;

     ob1.inputArray(10);
     ob1.ls(20);
     cout<<"Status: " <<ob1.status;
     cout<<"Pos: " <<ob1.pos;

 }
