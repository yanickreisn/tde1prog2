#include &lt;stdio.h&gt;

struct Produto {
int id;
char nome[100];
float valor;
};

int main() {
struct Produto produtos[5];
int i, count = 0;
float valorLimite;

// Entrada dos produtos
for (i = 0; i &lt; 5; i++) {
printf(&quot;Digite o ID do produto: &quot;);
scanf(&quot;%d&quot;, &amp;produtos[i].id);
printf(&quot;Digite o nome do produto: &quot;);
scanf(&quot;%s&quot;, produtos[i].nome);
printf(&quot;Digite o valor do produto: &quot;);
scanf(&quot;%f&quot;, &amp;produtos[i].valor);
}

printf(&quot;Digite o valor limite: &quot;);
scanf(&quot;%f&quot;, &amp;valorLimite);

// Contar produtos abaixo do valor limite
for (i = 0; i &lt; 5; i++) {
if (produtos[i].valor &lt; valorLimite) {
count++;
}
}

printf(&quot;Existem %d produtos abaixo de %.2f.\n&quot;, count, valorLimite);

return 0;
}
