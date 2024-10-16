# include <stdexcept>
class porcentaje
{
private:
    int numero;
public:
    porcentaje()
    {
        this->numero = 0;
    }
    porcentaje(int numero)
    {
        if (numero>100||numero<0)
        {
            throw new std::runtime_error("numero equivocado");
        }else{
            this->numero = numero;
        }
         this->numero = numero;
    }
    ~porcentaje() {}
    void Incrementar(int numero)
    {
        this->numero+=numero;
    }
    void Disminuir(int numero)
    {
        this->numero-=numero;
    }
   
    int Imprimir ()
    {
        return this->numero;
    }
};