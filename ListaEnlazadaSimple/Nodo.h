class Nodo{
private:
	short dato;
public:
	Nodo *ptrSiguiente;
	
	void setDato(short);
	short getDato();
	
	Nodo(void);
	Nodo(short);
	~Nodo(void);
};
Nodo::Nodo(){
	
}
Nodo::Nodo(short pDato){
	dato = pDato;
}
Nodo::~Nodo(){
	
}
void Nodo::setDato(short pDato){
	dato = pDato;
}
short Nodo::getDato(){
	return dato;
}
