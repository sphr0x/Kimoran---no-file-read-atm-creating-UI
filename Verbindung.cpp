#include "Verbindung.h"



Verbindung::Verbindung(char id, Node & rSrc, Node & rDst) 
	:Edge(rSrc, rDst), id('b'),m_kosten(3){
	if (id == ('b' || 'f')) {
		this->m_kosten = 3;
	}
	else if (id == 't')
		this->m_kosten = 5;
}


Verbindung::~Verbindung()
{
}
