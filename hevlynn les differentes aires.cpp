#include<iostream>
#include<math.h>
const float pi=3.14;
double a,b,c,d,e,f;
int x;
int main(int argc,char** argv){
	std::cout<<"entrez la nature de votre figure: 1 pour le carre ,2pour le rectangle et 3 cercle pour le  et 4 pour triangle"<<std::endl;
	std::cin>>x;
	switch(x){
		case 1:{
			std::cout<<"entrez les dimenssions du cote de ce carre"<<std::endl;
			std::cin>>b;
			a=b*b;
			std::cout<<"l'aire de ce carre est "<<a<<std::endl;
			a=b*4;
			std::cout<<"le perimetre de ce carre est "<<a<<std::endl;	
			break;
		}
		case 2:{
			std::cout<<"entrez la longueur et la largeur de ce rectangle"<<std::endl;
			std::cin>>b>>c;
			a=b*c;
			std::cout<<"l'aire de ce rectangle est "<<a<<std::endl;
			a=(b*2)+(c*2);
			std::cout<<"le perimetre de ce rectangle est "<<a<<std::endl;	
			break;
		}
		case 3:{
			std::cout<<"entrez le rayon"<<std::endl;
			std::cin>>b;
			a=b*b*pi;
			std::cout<<"l'aire de ce cercle est "<<a<<std::endl;
			a=b*2*pi;
			std::cout<<"le perimetre de ce cercle est "<<a<<std::endl;
			break;
		}case 4:{
			std::cout<<"entrez les trois cote du triangle  triangle"<<std::endl;
			std::cin>>b>>c>>d;
			a=b+c+d;
			e=a/2;
			std::cout<<"le perimetre de ce triangle est "<<a<<std::endl;
			f=sqrt(e*(e-b)*(e-c)*(e-d));
			std::cout<<"l'aire de ce cercle est "<<f<<std::endl;
		}
	}
	return 0;
}
