# 📌 Guia Rápido de C

## ✅ DICA: Uso do `scanf` com `&`
Ao usar o `scanf` para ler valores numéricos, **sempre use o operador `&`** para passar o endereço de memória das variáveis.

Para **strings**, **não é necessário** usar o operador `&`, pois o nome do array é um **ponteiro para o primeiro caractere** (tipo `char`), que já aponta para o endereço de memória correto.

---

## 🔢 Especificadores de Formato no C

| Tipo de Dado                | Especificador  |
|-----------------------------|----------------|
| **int**                      | `%d` ou `%i`   |
| **short int**                | `%hd`          |
| **long int**                 | `%ld`          |
| **long long int**            | `%lld`         |
| **unsigned int**             | `%u`           |
| **float**                    | `%f`           |
| **double**                   | `%lf`          |
| **long double**              | `%Lf`          |
| **char**                     | `%c`           |
| **string (char array)**      | `%s`           |
| **Ponteiro (endereço de memória)** | `%p`      |

---

## 🔄 `return 0` e `return 1` no `main()`

No C, a função `main()` retorna um valor inteiro (`int`), que informa ao sistema operacional se o programa foi executado com sucesso ou se ocorreu um erro.

- `return 0;` → Indica que o programa terminou **com sucesso**.
- `return 1;` → Indica que houve um **erro na execução**.

💡 **Dica:** Normalmente, usamos `return 0;` para indicar que o programa rodou corretamente e valores diferentes de zero (`return 1;`, `return -1;`, etc.) para indicar falhas específicas.

---

