#include<bits/stdc++.h>
using namespace std;
class Hash
{
 public:
   int *a,sz,count;
   Hash(int n)
   {
      a=new int[sz=n];
      for(int i=0;i<sz;i++)
      {
         a[i]=-1;
      }
      count=0;
   }
   void insert(int);
   int delete1(int);
   int search(int);
   void display();
};
void Hash::insert(int x)
{
   if(count==sz)
      cout<<"\nHash table Full";

   else{
      int key=x%sz;
      int t=key;
      if(a[key]==-1){
         a[key]=x;
         count++;
         cout<<"\n"<<x<<" Element Inserted at "<<key;
      }
      else{
         xyz:
         if(key==sz-1)
         key=-1;
         key=key+1;
         if(key==t)
            return;

         else{
            if(a[key]==-1)
             {
            a[key]=x;
            count++;
            cout<<"\n"<<x<<"  Element Inserted at  "<<key;
            return;
   }
   }
   goto xyz;
  }
 }
}
int Hash::delete1(int m)
{
 int i;
 int key=m%sz;
 if(count==0)
 {
  return 0;
 }
 if(a[key]==m)
 {
  a[key]=-1;
  count--;
  return key;
 }
 else
 {
  for(i=0;i<sz;i++)
  {
   if(a[i]==m)
   {
   a[i]==-1;
   count--;
   return i;
   }
  }
  if(i==sz)
  {
  return 100;
  }

 }
}
int Hash::search(int m)
{
int i;
 int key=m%sz;
 if(count==0)
 {
  return 0;
 }
 if(a[key]==m)
 {
  return key;
 }
 else
 {
  for(i=0;i<sz;i++)
  {
   if(a[i]==m)
   {
   return i;
   }
  }
  if(i==sz)
  {
  return 100;
  }

 }

}
void Hash::display()
{
 for(int i=0;i<sz;i++)
 {
  if(a[i]!=-1)
  {
   cout<<endl<<i<<"  "<<a[i];
  }
 }
}
int main()
{
 int n,x,y,z,ch,fg;
 cout<<"\n Enter size of hash table\n";
 cin>>n;
 Hash ob(n);
 while(1)
 {
  cout<<"\n1. insert\n2. Delete\n3. search\n4. display\n5. Exit\n enter ur choice\n";
  cin>>ch;
  switch(ch)
  {
   case 1:
    cout<<"\n Enter an Element to insert\n";
    cin>>x;
    ob.insert(x);
    break;
   case 2:
    cout<<"\n Enter an Element to Delete\n";
    cin>>y;
    fg=ob.delete1(y);
    if(fg==100)
    {

    cout<<"\nElement not in the List\n";
       }
    else if(fg==0)
    {
    cout<<"\n hash table Empty\n";
    }
    else
    {
     cout<<"\n deleted element "<<y<<" at position "<<fg<<endl;
    }
    break;
   case 3:
    cout<<"\n Enter an Element to Search\n";
    cin>>z;
    fg=ob.search(z);
    if(fg==100)
    {

    cout<<"\nElement not in the List\n";
       }
    else if(fg==0)
    {
    cout<<"\n hash table Empty\n";
    }
    else
    {
     cout<<"\n"<<z<<" element Searched at position "<<fg<<endl;
    }
    break;
   case 4:
    ob.display();
    break;
   case 5:
    return 1;
   default:
    cout<<"\n Wrong Choice\n";

  }
 }

 return 0;

}

/*
#include <bits/stdc++.h>
using namespace std;

const int T_S = 10;

class HashTable {
   public:
      int k;
      int v;
      HashTable(int k, int v) {
         this->k = k;
         this->v = v;
      }
};

class DelNode:public HashTable {
   private:
      static DelNode *en;
      DelNode():HashTable(-1, -1) {}
   public:
      static DelNode *getNode() {
         if (en == NULL)
            en = new DelNode();
         return en;
      }
};
DelNode *DelNode::en = NULL;
class HashMapTable {
   private:
      HashTable **ht;
   public:
      HashMapTable() {
         ht = new HashTable* [T_S];
         for (int i = 0; i < T_S; i++) {
            ht[i] = NULL;
         }
      }

      int HashFunc(int k) {
         return k % T_S;
      }

      void Insert(int k, int v) {
         int hash_val = HashFunc(k);
         int init = -1;
         int delindex = -1;
         while (hash_val != init && (ht[hash_val]  == DelNode::getNode() || ht[hash_val] != NULL && ht[hash_val]->k != k)) {
            if (init == -1)
               init = hash_val;
            if (ht[hash_val] == DelNode::getNode())
               delindex = hash_val;
               hash_val = HashFunc(hash_val + 1);
         }
         if (ht[hash_val] == NULL || hash_val == init) {
            if(delindex != -1)
               ht[delindex] = new HashTable(k, v);
            else
               ht[hash_val] = new HashTable(k, v);
         }
         if(init != hash_val) {
            if (ht[hash_val] != DelNode::getNode()) {
               if (ht[hash_val] != NULL) {
                  if (ht[hash_val]->k== k)
                     ht[hash_val]->v = v;
               }
            } else
            ht[hash_val] = new HashTable(k, v);
         }
      }
      int SearchKey(int k) {
         int hash_val = HashFunc(k);
         int init = -1;
         while (hash_val != init && (ht[hash_val] == DelNode::getNode() || ht[hash_val] != NULL && ht[hash_val]->k!= k)) {
            if (init == -1)
               init = hash_val;
               hash_val = HashFunc(hash_val + 1);
         }
         if (ht[hash_val] == NULL || hash_val == init)
            return -1;
         else
            return ht[hash_val]->v;
      }
      void Remove(int k) {
         int hash_val = HashFunc(k);
         int init = -1;
         while (hash_val != init && (ht[hash_val] == DelNode::getNode() || ht[hash_val] != NULL && ht[hash_val]->k!= k)) {
            if (init == -1)
               init = hash_val;
               hash_val = HashFunc(hash_val + 1);
         }
         if (hash_val != init && ht[hash_val] != NULL) {
            delete ht[hash_val];
            ht[hash_val] = DelNode::getNode();
         }
      }
      ~HashMapTable() {
         delete[] ht;
      }
};
int main() {
   HashMapTable hash;
   int k, v;
   int c;
   while(1) {
      cout<<"1.Insert element into the table"<<endl;
      cout<<"2.Search element from the key"<<endl;
      cout<<"3.Delete element at a key"<<endl;
      cout<<"4.Exit"<<endl;
      cout<<"Enter your choice: ";
      cin>>c;
      switch(c) {
         case 1:
            cout<<"Enter element to be inserted: ";
            cin>>v;
            cout<<"Enter key at which element to be inserted: ";
            cin>>k;
            hash.Insert(k, v);
         break;
         case 2:
            cout<<"Enter key of the element to be searched: ";
            cin>>k;
            if(hash.SearchKey(k) == -1) {
               cout<<"No element found at key "<<k<<endl;
               continue;
            } else {
               cout<<"Element at key "<<k<<" : ";
               cout<<hash.SearchKey(k)<<endl;
            }
         break;
         case 3:
            cout<<"Enter key of the element to be deleted: ";
            cin>>k;
            hash.Remove(k);
         break;
         case 4:
            exit(1);
         default:
            cout<<"\nEnter correct option\n";
      }
   }
   return 0;
}
*/
