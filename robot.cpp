#include <iostream>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <string.h>
#include <string>  
#include <vector>  


using namespace std;

class  CCoordenada
{
public:
	CCoordenada( int, int);
	CCoordenada();
	
	~CCoordenada();

	int getPosx() {
		return x;
	}
	int getPosy() {
		return y;
	}


private:

	int x;
	int y;

};

CCoordenada::CCoordenada( int _x, int _y)

{
	
	x = _x;
	y = _y;
}


CCoordenada::CCoordenada()
{

}
CCoordenada::~CCoordenada()
{
}



class CRobot
{
public:
	CRobot(string, char, CCoordenada, int,int, int);
	void moverse(int,int);
	
	~CRobot();

	string getNombre() {
		return nombre;
	}
	char getColor() {
		return color;
	}

	char getPosx() {
		return  coordenada.getPosx();
	}

	char getPosy() {
		return coordenada.getPosy();
	}



private:
	string nombre;
	char color;
	CCoordenada coordenada;
	int vidas;
	int x;
	int y;


};

CRobot::CRobot(string _nombre, char _color, CCoordenada _coordenada, int m_vidas, int _x , int _y)
{
	nombre = _nombre;
	color = _color;
	coordenada = _coordenada;
	vidas = m_vidas;
	x = _x;
	y = _y;

}


void CRobot::moverse(int x,int y)
{
	
}



CRobot::~CRobot()
{
}



class CBattleBox
{
public:
	CBattleBox(int, int);
	void adicionarRobot(CRobot);
	CRobot removerRobot(string);
	CRobot buscarRobot(string);
	void imprimirRobot();
	void dibujarBattleBox();
	void actualizaBattleBox();
	
	~CBattleBox();

	int getAltura() {
		return altura;
	}
	int getancho() {
		return ancho;
	}

	char getCantObjetos() {
		return  cantobstaculos;
	}

	
private:
	
	int altura;
	int ancho;
	int cantRobots;
	int cantobstaculos;

	vector <char> m_plano;
	vector <CRobot> m_robot;
	vector <CObstaculo>m_obstaculos;
 


};

CBattleBox::CBattleBox(int _altura, int _anchura)
{
	altura = _altura;
	ancho = _anchura;

	
}


void CBattleBox::adicionarRobot(CRobot	probot)
{

}

CRobot CBattleBox::removerRobot(string nombre)
{
	
}

CRobot CBattleBox::buscarRobot(string)
{
	
}

void CBattleBox::imprimirRobot()
{
}

void CBattleBox::dibujarBattleBox()
{
}

void CBattleBox::actualizaBattleBox()
{
}

CBattleBox::~CBattleBox()
{
}



class CObstaculo
{
public:
	CObstaculo();
	~CObstaculo();

private:

};

CObstaculo::CObstaculo()
{
}

CObstaculo::~CObstaculo()
{
}