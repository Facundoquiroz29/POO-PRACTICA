#ifndef COMPRA_H
#define COMPRA_H

class compra
{
private:
    char tipo;
    char* descripcion;
    float precio;
public:
    compra();
    compra(char tipo, char* descripcion, float precio);
    char *getDescripcion() const;
    float getPrecio() const;
    void setDescripcion(char *newDescripcion);
    void setPrecio(float newPrecio);
    char getTipo() const;


    bool operator==(char tipo) const {
     return this->tipo == tipo;
    }

    bool operator==(const compra& t)
    {
        return (this->tipo == t.tipo) && (this->descripcion == t.descripcion) && (this->precio == t.precio);
    }
};



#endif // COMPRA_H
