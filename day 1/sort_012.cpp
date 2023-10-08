
class Solution
{
    public:
    void sort012(int a[], int n){
    int one = 0, two= 0, three = 0;
    for (int i = 0; i < n; i++) {
    if (a[i] == 0) 
    {
      one++;

    }
    else if (a[i] == 1)
    {
      two++;
    } 
    else 
    {

      three++;
   }

  }
  for (int i = 0; i < one; i++) {
    a[i] = 0;
  }
  for (int j = one; j < one+two; j++) {
    a[j] = 1;
  }
  for (int k = one+two; k<n; k++) {
    a[k] = 2;
  }

 }
    
};