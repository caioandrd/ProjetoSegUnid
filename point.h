#ifndef POINT_H
#define POINT_H

///
/// @brief A classe ponto recebe as coordenadas do ponto
/// em que se deseja representar no plano cartesiano de duas dimensões.
///
class Point
{

private:
    ///
    /// @brief x,y
    /// @param x guarda a coordenada x do ponto.
    /// @param y guarda a coordenada y do ponto.
    float x, y;
public:
    ///
    /// @brief Point construtor com argumento da classe Point.
    /// @param _x valor da coordenada x do ponto.
    /// @param _y valor da coordenada y do ponto.
    ///
    Point (float _x = 0, float _y = 0);
    ///
    /// @brief setX A função determina o valor da variável x.
    /// @param x É o valor q será guardado na variável.
    ///
    void setX(float x);
    ///
    /// @brief setY A função determina o valor da variável y.
    /// @param y É o valor q será guardado na variável.
    ///
    void setY(float y);
    ///
    /// @brief setXY Função que determina o valor das variáveis x e y ao mesmo tempo.
    /// @param _x É o valor q será guardado na variável x;
    /// @param _y É o valor q será guardado na variável y;
    ///
    void setXY(float _x, float _y);
    ///
    /// @brief getX Função que tem acesso ao valor guardado na variável x.
    /// @return Retorna o valor que está guardado.
    ///
    float getX(void);
    ///
    /// @brief getY Função que tem acesso ao valor guardado na variável y.
    /// @return Retorna o valor que está guardado.
    ///
    float getY(void);
    ///
    /// @brief add Função que soma dois pontos.
    /// @param p1 Ponto que será adicionado a um ponto já definido.
    /// @return Retorna a soma dos pontos.
    ///
    Point add (Point p1);
    ///
    /// @brief sub Função que subtrai dois pontos.
    /// @param p1 Ponto que será subtraído de um ponto já definido.
    /// @return Retorna a subtração dos pontos.
    ///
    Point sub (Point p1);
    ///
    /// @brief norma Função que calcula a distância do ponto para a origem do sistema de coordenadas.
    /// @return Retorna a distância.
    ///
    float norma ();
    ///
    /// @brief translada Função que translada um ponto já definido.
    /// @param a Valor que será adicionado ao x do ponto.
    /// @param b Valor que será adicionado ao y do ponto.
    /// @return Retorna a nova posição do ponto adicionado de "a" e "b".
    ///
    Point translada (float a, float b);
    ///
    /// @brief imprime Função que imprime na tela o ponto.
    ///
    void imprime (void);

};

#endif // POINT_H
