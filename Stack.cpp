#include <iostream>
#include <conio.h> 
#define MAX 5 
using namespace std; 

int top=-1;
string Stack[MAX];

void push(){
    if(top == MAX-1){
        cout << "<> Tabung sudah penuh" << endl;
    }else{
        top++;
        cout << "> Masukan Bola : ";
        cin >> Stack[top];
        cout << "Bola " << Stack[top] << " telah dimasukkan" << endl;
    }
}

void pop(){
    if(top == -1){
        cout << "> Tabung kosong" << endl;
    }else{
        cout << "Bola " << Stack[top] << " sudah diambil" << endl;
        Stack[top--];
    }
}

int clear(){
    return top = -1;
}

void Print(){
    if (top == -1) {
	cout << "     Tabung" <<endl;
	cout<<endl;
    cout <<  "|    " << "Kosong" <<"\t|"<< endl;
    }
    else {
	cout << "     Tabung" <<endl;
	cout << endl;
	
	for (int i = top; i >= 0; i--){
	cout << "|    " << Stack[i] << "\t|" << endl;
 	}
	cout << endl;
    }
}

int main()
{
	int pilih;
    do {
        Print();
        cout << "\n1. Push"
             << "\n2. Pop"
             << "\n3. Clear"
             << "\n4. Exit"
             << "\n\n<> Pilih : "; 
			 cin >> pilih;
			 
        switch (pilih){
            case 1:
                push();
				getch();
                break;
            case 2:
                pop();
				getch();
                break;
            case 3:
                clear();
                cout << "\nBerhasil mengambil semua bola" << endl;
                getch();
                break;
            case 4:
                cout << "Program berakhir" << endl;
                getch();
                break;
            default:
                cout << "Pilihan tidak tersedia" << endl;
                getch();
                break;
        }
        system("cls");
    }while(pilih !=4);
}
