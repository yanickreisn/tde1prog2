#include &lt;stdio.h&gt;

struct Produto {
int id;
char nome[100];
float valor;

};

int main() {
struct Produto produtos[5];
int i;
float soma = 0, media;

// Entrada dos produtos
for (i = 0; i &lt; 5; i++) {
printf(&quot;Digite o ID do produto: &quot;);
scanf(&quot;%d&quot;, &amp;produtos[i].id);
printf(&quot;Digite o nome do produto: &quot;);
scanf(&quot;%s&quot;, produtos[i].nome);
printf(&quot;Digite o valor do produto: &quot;);
scanf(&quot;%f&quot;, &amp;produtos[i].valor);
}

// Calcular a soma dos preços
for (i = 0; i &lt; 5; i++) {
soma += produtos[i].valor;
}

// Calcular a média
media = soma / 5;
printf(&quot;A média dos preços dos produtos é: %.2f\n&quot;, media);

return 0;
}
