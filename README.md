
<body>
<h1>Cálculo de Proporções</h1>
<p>Proporções são uma comparação entre duas quantidades. Elas são usadas para encontrar a relação entre duas coisas. Por exemplo, se você tem 2 maçãs e 3 laranjas, a proporção de maçãs para laranjas é 2:3.</p>

<h2>Como utilizar o programa em C++</h2>
<p>Para utilizar o programa em C++ para calcular proporções, siga os seguintes passos:</p>
<ol>
<li>Abra o prompt de comando ou o terminal do seu sistema operacional;</li>
<li>Navegue até o diretório onde o programa foi salvo usando o comando "cd" seguido do caminho completo do diretório;</li>
<li>Compile o programa usando o comando "g++ nome-do-programa.cpp -o nome-do-executavel". Certifique-se de substituir "nome-do-programa.cpp" pelo nome do arquivo do programa em C++ e "nome-do-executavel" pelo nome que você deseja dar ao arquivo executável gerado;</li>
<li>Execute o programa digitando o nome do executável seguido dos valores das duas quantidades que você deseja comparar. Por exemplo: "./nome-do-executavel 2 3". O programa irá exibir a proporção no formato "x:y".</li>
</ol>
<h2>Exemplo de código em C++ para calcular proporções</h2>
<p>Abaixo está um exemplo de código em C++ que calcula a proporção de duas quantidades inseridas pelo usuário:</p>
<pre>
#include &lt;iostream&gt;
using namespace std;
int main() {
double quantidade1, quantidade2;
cout << "Digite o valor da primeira quantidade: ";
    cin >> quantidade1;
    cout << "Digite o valor da segunda quantidade: ";
    cin >> quantidade2;
    cout << "A proporção entre " << quantidade1 << " e " << quantidade2 << " é " << quantidade1 << ":" << quantidade2 << endl;
    return 0;
}
</pre>
</body>
