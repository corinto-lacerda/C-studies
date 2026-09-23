# Calculador de notas

Programa em C feito para exercitar o aprendizado da linguagem. A ideia é documentar, num software simples, os conceitos vistos até o momento — nem tudo será incluído (coisas ainda sem utilidade prática ficam de fora), mas o que já tem serventia está aqui.

No fim, o programa serve para cadastrar alunos, registrar notas por trimestre, calcular a média e informar se o aluno foi aprovado ou reprovado. Tudo 100% em C.

Escrito e testado pensando em **Linux**.

## Como funciona

1. Pergunta o número de matérias.
2. Para cada um, pede a nota dos 4 trimestres (`NumTrimestre`), validando que cada nota esteja entre 0 e 10.
3. Soma as notas, calcula a média (`total / número de trimestres`) e compara com a nota de corte (`6.5`).
4. Exibe o total, a média e se o aluno foi **Aprovado** ou **Reprovado**.

### Exemplo de saída

```
_____________________________________
|_________calculadora de notas______|
|___________________________________|
Notas : 1.00 2.00 3.00 4.00
Você foi Reprovado!  o Total = 10.00 ---------- a Média = 2.50
```

## Estrutura do código

- `limpar_tela()` — limpa o terminal (Linux).
- `escrever_titulo()` — desenha o cabeçalho do programa.
- `ler_notas()` — lê as notas de cada trimestre e valida se estão entre 0 e 10.
- `calcular_notas()` — percorre a matriz de notas somando o total de cada aluno e chama `calcular_media()`.
- `calcular_media()` — calcula a média, define a nota de corte (6.5) e informa aprovação/reprovação.

As funções são declaradas (prototipadas) antes da `main()` e implementadas depois dela — o compilador lê o código de cima para baixo, então o protótipo avisa que a função existe antes de ela ser usada.

## Como compilar e rodar

```bash
gcc Calculador_de_notas.c -o Calculador_de_notas
./Calculador_de_notas
```
