#include &lt;stdio.h&gt;

struct Produto {
int id;
char nome[100];
float valor;
};

int main() {
struct Produto produtos[5];
int idBuscar, i;

// Entrada dos produtos
for (i = 0; i &lt; 5; i++) {
printf(&quot;Digite o ID do produto: &quot;);
scanf(&quot;%d&quot;, &amp;produtos[i].id);
printf(&quot;Digite o nome do produto: &quot;);
scanf(&quot;%s&quot;, produtos[i].nome);
printf(&quot;Digite o valor do produto: &quot;);
scanf(&quot;%f&quot;, &amp;produtos[i].valor);
}

printf(&quot;Digite o ID do produto a atualizar: &quot;);

scanf(&quot;%d&quot;, &amp;idBuscar);

// Atualizar o valor do produto
for (i = 0; i &lt; 5; i++) {
if (produtos[i].id == idBuscar) {
printf(&quot;Produto encontrado. Digite o novo valor: &quot;);
scanf(&quot;%f&quot;, &amp;produtos[i].valor);
printf(&quot;Valor do produto atualizado: ID = %d, Nome = %s, Novo
Valor = %.2f\n&quot;,
produtos[i].id, produtos[i].nome, produtos[i].valor);
return 0;
}
}

printf(&quot;Produto com ID %d não encontrado.\n&quot;, idBuscar);

return 0;
}
