
#include <bits/stdc++.h>
using namespace std;

// Driver code
int main()
{
  vector<int> vec{10, 20, 30, 40};
vector<int>::iterator it;

// Print Original Vector
cout << "Original vector :";

for (int i = 0; i < vec.size(); i++)
	cout << " " << vec[i];

cout << "\n";
int ser = 30;


it = std::find(vec.begin(), 
				vec.end(), ser);
if (it != vec.end()) 
{
	cout << "Element " << ser << 
				" found at position : ";
	cout << it - vec.begin() << 
				" (counting from zero) \n";
}
else
	cout << "Element not found.\n\n";

return 0;
}
