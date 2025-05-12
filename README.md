# 💰 Sistema de Gerenciamento de Despesas em C

Este é um projeto simples em linguagem C que simula um sistema de controle financeiro pessoal. Com ele, é possível registrar recebimentos, despesas, verificar o saldo atual, visualizar o extrato de transações e até calcular o imposto de renda (IRPF) com base nos ganhos totais.

## 📦 Funcionalidades

- Adicionar **recebimentos**
- Adicionar **despesas**
- Verificar o **saldo**
- Exibir o **extrato completo**
- Calcular o **imposto de renda (IRPF)**

## 🛠️ Como compilar e rodar

Você pode compilar o projeto utilizando o `gcc` no terminal:

```bash
gcc main.c -o financeiro
./financeiro
```

> 💡 Certifique-se de que o arquivo `recebimento.c` esteja na mesma pasta que o `main.c`, já que ele é incluído diretamente com `#include "recebimento.c"`.

## 📋 Menu Principal

Ao executar o programa, será apresentado o seguinte menu:

```
1. Adicionar recebimento
2. Adicionar despesas
3. Exibir saldo
4. Exibir extrato
5. Calcular o imposto de renda
0. Sair
```

## 💡 Exemplo de uso

```plaintext
Escolha uma opcao:
1
Entre o valor revebido:
1000
Voce recebeu 1000.00 reais na operação de numero 0
Operação concluída com sucesso.

Escolha uma opcao:
2
Entre o valor pago:
250
Voce pagou 250.00 reais na operação de numero 1
Operação concluída com sucesso.

Escolha uma opcao:
3
Voce possui um saldo de 750.00 reais.
```

## 📈 Lógica do IRPF

O imposto de renda é calculado com base nos seguintes critérios:

| Faixa salarial (R$)         | Alíquota (%) | Dedução (R$) |
|----------------------------|--------------|--------------|
| Até 1.903,98               | Isento       | -            |
| De 1.903,99 até 2.826,65   | 7,5%         | 142,80       |
| De 2.826,66 até 3.751,05   | 15%          | 354,80       |
| De 3.751,06 até 4.664,68   | 22,5%        | 636,13       |
| Acima de 4.664,68          | 27,5%        | 869,36       |

## 🐞 Possíveis melhorias para o futuro

- Salvar os dados em arquivo para manter histórico entre execuções
- Adicionar datas às transações
- Separar funções em `.h` para melhor modularização

## 🧾 Licença

Este projeto é de uso livre para fins de estudo e melhoria. Sem licença específica definida.

---

Desenvolvido por Guilherme Souza Mercedes 🧠💻
