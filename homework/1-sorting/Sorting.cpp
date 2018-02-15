#include <iostream.h>

int main() {

  double *a;
  int num, ram;

  cout<<"Enter number of elements"<<endl;
  cin>>num;
  a = new double[num];

  for (int i = 0; i < num-1; i++) a[i] = random(100);

  for (int i = 0; i < num; i++) cout<<a[i]<<endl;
  for(int k = 0; k < num; k++) {
        for (int i = 0; i < num-1; i++) {
                if(a[i]>a[i+1]) {
                        ram = a[i+1];
                        a[i+1] = a[i];
                        a[i] = ram;
                }
        }
  }

  cout<<endl;
  for (int i = 0; i < num; i++) cout<<a[i]<<endl;
  delete []a;
  system("PAUSE");
}
