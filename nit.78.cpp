# include<iostream>
using namespace std;
class set
{ 
int m, n;
public:
void input (void);
void display (void);
int largest(void); };
int set:: largest (void)
{ if (m >= n)
return (m);
else
return (n); }
void set : : input (void)
{ cout << �input values of m & n:�;
cin >> m >> n; }
void set :: display(void)
{ cout << �largest value = �
<<largest(); }
int main()
{
set a
a.input();
a.display();
return 0; }