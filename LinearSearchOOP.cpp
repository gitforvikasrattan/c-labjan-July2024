#include<iostream>
using namespace std;
class search
{
   int a[60];
   int item;
   int size;
   int pos;
   int status; // 0 means not found


   public:

       int retPos()
       {
         return pos;
       }

       int retStatus()
       {
           return status;
       }

       void inputArray(int n)
       {
           int i;
           size = n;
           status = 0;
           pos = 0;
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
     cout<<"Enter the size of array: ";
     cin>>n;
     ob1.inputArray(n);

     cout<<"\n Enter the Item You want to search: ";
     int val;
     cin>>val;
     ob1.ls(val);
     if (ob1.retStatus())
     {
         cout<<" \n Search Success full\n";
         cout<<"\nPos: " <<ob1.retPos();

     }
     else
        cout<<" \n Search Fail\n";



 }
