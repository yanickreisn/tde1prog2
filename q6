#include &lt;stdio.h&gt;

struct Clube {
int id;
char nome[100];
int vitorias;

int empates;
int derrotas;
int gols_pro;
int gols_contra;
};

int calcularPontuacao(struct Clube clube) {
return (clube.vitorias * 3) + (clube.empates * 1);
}

int main() {
struct Clube clubes[10];
int i;

// Cadastro dos clubes
for (i = 0; i &lt; 10; i++) {
printf(&quot;Digite o ID do clube: &quot;);
scanf(&quot;%d&quot;, &amp;clubes[i].id);
printf(&quot;Digite o nome do clube: &quot;);
scanf(&quot;%s&quot;, clubes[i].nome);
printf(&quot;Digite o número de vitórias: &quot;);
scanf(&quot;%d&quot;, &amp;clubes[i].vitorias);
printf(&quot;Digite o número de empates: &quot;);
scanf(&quot;%d&quot;, &amp;clubes[i].empates);
printf(&quot;Digite o número de derrotas: &quot;);
scanf(&quot;%d&quot;, &amp;clubes[i].derrotas);
printf(&quot;Digite o número de gols pró: &quot;);
scanf(&quot;%d&quot;, &amp;clubes[i].gols_pro);

printf(&quot;Digite o número de gols contra: &quot;);
scanf(&quot;%d&quot;, &amp;clubes[i].gols_contra);
}

// Exibir pontuação de cada clube
for (i = 0; i &lt; 10; i++) {
int pontuacao = calcularPontuacao(clubes[i]);
printf(&quot;Clube: %s, Pontuação: %d\n&quot;, clubes[i].nome, pontuacao);
}

return 0;
}
