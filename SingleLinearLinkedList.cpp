#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa
{
    int no_peserta;
    int NIM;
    char kelas;
    
    Mahasiswa*next;
};

void printList(Mahasiswa*n)
{
    while (n!= NULL)
    {
      cout<<"No peserta : "<<n->no_peserta<<" "<<endl;
      cout<<"NIM        : "<<n->NIM<<" "<<endl;
      cout<<"Kelas      : "<<n->kelas<<" "<<endl;
      cout<<" "<<endl;
      
     n=n->next;
     }
}
int main()
{
    Mahasiswa*head= NULL;
    Mahasiswa*second= NULL;
    Mahasiswa*third= NULL;
    
    head= new Mahasiswa();
    second= new Mahasiswa();
    third= new Mahasiswa();
    
    head->no_peserta= 12345;
    head->NIM= 1829142008;
    head->kelas= 'A';
    head->next= second;
    
    second->no_peserta= 678910;
    second->NIM= 1829142004;
    second->kelas= 'B';
    second->next= third;
    
    third->no_peserta= 54321;
    third->NIM= 1829142018;
    third->kelas= 'C';
    third->next= NULL;
    
    printList(head);
    
    cin.get();
    return 0;
}
    
