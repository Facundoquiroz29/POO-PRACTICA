#ifndef COMPRA_H
#define COMPRA_H

class compra
{
private:
    char* descripcion;
    float precio;
public:
    compra();
    compra(char* descripcion, float precio);
    char *getDescripcion() const;
    float getPrecio() const;
    void setDescripcion(char *newDescripcion);
    void setPrecio(float newPrecio);
};

#endif // COMPRA_H
