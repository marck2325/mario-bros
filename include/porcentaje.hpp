Include <stdexcept>
class porcentaje
{
private:
    /* data */
public:
    porcentaje()
    {
        this->numero = 0;
    }
    porcentaje(int numero)
    {
        this->numero = numero;
        throw new std::runtime_error("numero equivocado");
    }
    ~porcentaje() {}
    void Incrementar(int numero)
    {
    }
    void Disminuir(int numero)
    {
    }
};