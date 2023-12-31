#include<iostream>
#include<math.h>
using namespace std;

void swap(int &x,int &y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
}

class minHeap{
	public:
	int *harr;
	int capacity;
	int  heap_size;
	minHeap(int cap)
	{
		heap_size=0;
		capacity=cap;
		harr=new int[cap];
	}
	int parent(int i)
	{
		return (i-1)/2;
	}
	int left(int i)
	{
		return (2*i+1);
	}
	int right(int i)
	{
		return (2*i+2);
	}
	int getMin()
	{
		return harr[0];
	}
	void insertKey(int k)
	{
		heap_size++;
		int i=heap_size-1;
		harr[i]=k;
		while(i!=0&&harr[parent(i)]>harr[i])
		{
			swap(harr[parent(i)],harr[i]);
			i=parent(i);
		}
	}
	int extractMin()
	{
		if(heap_size==0)
		{
			cout<<"not avalaibe"<<endl;
		}
		else if(heap_size==1)
		{
			heap_size--;
			return  harr[0];
		}
		int root=harr[0];
		harr[0]=harr[heap_size-1];
		heap_size--;
		min_heapify(0);
		return root;
	}
	void decreseKey(int i,int val)
	{
		harr[i]=val;
		while(i!=0&&harr[parent(i)]>harr[i])
		{
			swap(  harr[i], harr[parent(i)]);
			i=parent(i);
		}
	}
	void linearSearch(int k)
	{
		for(int i=0;i<heap_size;++i)
		{
			if(harr[i]==k)
			{
				cout<<"good news,the value forwhich you are craving is found"<<endl;
			}
		}
	}
	void letsPrint()
	{
		for(int i=0;i<heap_size;++i)
		{
			cout<<harr[i]<<"->";
		}
		cout<<endl;
	}
	void deleteKey(int i)
	{
		decreseKey(i,INT_MIN);
		extractMin();
	}
	void min_heapify(int i)
	{
		int l=left(i);
		int r=right(i);
		int smallest=i;
		if(l<heap_size&&harr[l]<harr[smallest])
		{
			smallest=l;
		}
		if(l<heap_size&&harr[r]<harr[smallest])
		{
			smallest=r;
		}
		if(i!=smallest)
		{
			swap(harr[i],harr[smallest]);
		    min_heapify(i);
	    }
	}
	int height(){
		return ceil(log2(heap_size + 1)) - 1;
	}
};

int main()
{
	int s;
  cout << "Enter Size of Min Heap" << endl;
  cin >> s;
  minHeap obj(s);
  cout << "Min Heap Created" << endl;

  int option, val;

  do {
    cout << "What operation do you want to perform? " <<
      " Select Option number. Enter 0 to exit." << endl;
    cout << "1. Insert Key/Node" << endl;
    cout << "2. Search Key/Node" << endl;
    cout << "3. Delete Key/Node" << endl;
    cout << "4. Get Min" << endl;
    cout << "5. Extract Min" << endl;
    cout << "6. Height of Heap" << endl;
    cout << "7. Print/Traversal Heap values" << endl;
    cout << "8. Clear Screen" << endl;
    cout << "0. Exit Program" << endl;

    cin >> option;

    switch (option) {
    case 0:
      break;
    case 1:
      cout << "INSERT Operation -" << endl;
      cout << "Enter VALUE to INSERT in HEAP: ";
      cin >> val;
      obj.insertKey(val);
      cout << endl;
      break;
    case 2:
      cout << "SEARCH Operation -" << endl;
      cout << "Enter VALUE to SEARCH in HEAP: ";
      cin >> val;
      obj.linearSearch(val);
      break;
    case 3:
      cout << "DELETE Operation -" << endl;
      cout << "Enter INDEX of Heap Array to DELETE: ";
      cin >> val;
      obj.deleteKey(val);
      break;
    case 4:
      cout << "GET Min value : " << obj.getMin();
      cout << endl;
      break;
    case 5:
      cout << "EXTRACT Min value : " << obj.extractMin();
      cout << endl;
      break;
    case 6:
      cout << "HEAP TREE HEIGHT : " << obj.height() << endl;
      break;

    case 7:
      cout << "PRINT Heap Array : " << endl;
      obj.letsPrint();

      cout << endl;
      break;

    case 8:
      system("cls");
      break;

    default:
      cout << "Enter Proper Option number " << endl;
    }

  } while (option != 0);

  return 0;
	
}
