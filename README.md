# 🧮 Calculadora Lógica e Aritmética em C

> Projeto acadêmico desenvolvido para a disciplina de lógica e linguagem de programação, aplicando conceitos fundamentais de C como manipulação de variáveis, operadores aritméticos, relacionais e lógicos, além de tratamento de exceções (divisão por zero).

---

## 🚀 Sobre o Projeto

Este programa foi desenvolvido na linguagem **C** (executado via **OnlineGDB**) com o objetivo de receber três números inteiros e realizar um conjunto completo de operações matemáticos e verificações condicionais:

1. **Entrada de Dados:** Leitura de 3 números inteiros (`a`, `b`, `c`).
2. **Operações Aritméticas:** Soma, subtração, multiplicação e divisão (com conversão explícita para `float` e validação para evitar divisão por zero).
3. **Operadores Relacionais:** Checagem se o 1º número é maior que o 2º (`a > b`), e se o 2º é menor que o 3º (`b < c`).
4. **Operadores Lógicos:** Verificação combinada se o 1º número é positivo e o 2º número é par (`a > 0 && b % 2 == 0`).
5. **Suíte de Testes:** Execução de testes com múltiplos conjuntos de dados cobrindo todos os desvios de fluxo (`if/else`).

---

## 🧪 Casos de Teste e Execução 
Abaixo estão os testes realizados no terminal do compilador cobrindo diferentes cenários 
(incluindo números negativos e divisão por zero):


## 📸 Teste 1: Valores Positivos Padrão
Entrada: 10, 3, 2
> Comportamento: Passa na condição de maior/menor e cai no else da verificação lógica (pois o 2º número é ímpar).

## 📸 Teste 2: Condição Lógica Satisfeita
Entrada: 5, 4, 9
> Comportamento: Dispara a mensagem específica de que o primeiro número é positivo e o segundo é par.

## 📸 Teste 3: Tratamento de Negativos e Limites
Entrada: -2, 6, 0
> Comportamento: Testa números negativos e avalia o comportamento relacional e lógico correspondente (com aviso de divisão por zero).

## 🛠️ Tecnologias Utilizadas
Linguagem: C (Padrão C99)
> Ambientes de Desenvolvimento: OnlineGDB / Visual Studio Code

## Controle de Versão: Git & GitHub

## 👤 Autor
Desenvolvido por **(Juan Oliveira)**
Estudante de Análise e Desenvolvimento de Sistemas na Anhanguera.

## 📝 Minha Conclusão
 Esse projeto como se trata de uma linguagem de baixo nível, 
 entregou-me uma visão mais ampla de como a linguagem C funciona,
 e como ela é capaz de manipular dados de forma eficiente.
 Além disso, pude compreender melhor os conceitos de operadores e estruturas condicionais,
 que são fundamentais para qualquer programador.
 Gostei bastante de ter esse contato com a linguagem C, e pretendo continuar explorando as suas
 funcionalidades em projetos futuros.
 Linguagem essa, que apesar de ser antiga, ainda é muito utilizada em sistemas embarcados e
 aplicações de alto desempenho.
 Fiz esse projeto com o intuito de apreder mais sobre a linguagem C, e incentivar outros a aprenderem também, 
 pois acredito que é uma linguagem que vale a pena ser estudada.
 Embora aja muitos rumores que ela não é mais utilizada, ela ainda é muito relevante no mundo da programação,
 e com certeza vale a pena aprender, pois ela é a base de muitas outras linguagens,
 e entender como ela funciona pode ajudar muito no aprendizado de outras linguagens...
 
## Diretório do Projeto
Na pasta 'evidencias' está as imagens de testes feitos após o programa ser complilado e execultado, 
mostrando o resultado de cada teste feito, e na pasta 'src' está o código-fonte do programa - main.c, 
que contém a implementação das operações e verificações descritas acima.
Na pastar "evidencias", tem uma pasta chamada "codigo" nela tem uma imagem do código-fonte do programa,
mostrando a implementação das operações e verificações descritas acima. 

## Operadores usados no programa:
- Aritméticos: `+`, `-`, `*`, `/`
- Relacionais: `>`, `<`
- Lógicos: `&&`, `||`, `!`
- Atribuição: `=`
 
 Apreciem essa obra de arte da programação,
 e espero que ela possa inspirar outros a explorar o mundo da linguagem C e as suas possibilidades!
 
 ## Der o Primeiro passo, pois só assim você vai conseguir chegar ao seu objetivo, e lembre-se, a prática leva a perfeição!

 ## THE END
