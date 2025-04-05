# 📌 Guia Rápido de C

## ✅ DICA: Uso do `scanf` com `&`
Ao usar o `scanf` para ler valores numéricos, **sempre use o operador `&`** para passar o endereço de memória das variáveis.

Para **strings**, **não é necessário** usar o operador `&`, pois o nome do array é um **ponteiro para o primeiro caractere** (tipo `char`), que já aponta para o endereço de memória correto.

---

## 🔢 Especificadores de Formato no C

| Tipo de Dado                | Especificador  | Tamanho (Bytes) | Tamanho (Bits) |
|-----------------------------|----------------|------------------|----------------|
| **int**                      | `%d` ou `%i`   | 4 bytes          | 32 bits        |
| **short int**                | `%hd`          | 2 bytes          | 16 bits        |
| **long int**                 | `%ld`          | 4 ou 8 bytes     | 32 ou 64 bits  |
| **long long int**            | `%lld`         | 8 bytes          | 64 bits        |
| **unsigned int**             | `%u`           | 4 bytes          | 32 bits        |
| **float**                    | `%f`           | 4 bytes          | 32 bits        |
| **double**                   | `%lf`          | 8 bytes          | 64 bits        |
| **long double**              | `%Lf`          | 12 ou 16 bytes   | 96 ou 128 bits |
| **char**                     | `%c`           | 1 byte           | 8 bits         |
| **string (char array)**      | `%s`           | 1 byte por char  | 8 bits/char    |
| **Ponteiro (endereço de memória)** | `%p`    | 4 ou 8 bytes     | 32 ou 64 bits  |

📝 Obs: Os tamanhos podem variar entre sistemas e arquiteturas (32 bits vs 64 bits), mas esses são os mais comuns em arquiteturas modernas.

---

## 🔄 `return 0` e `return 1` no `main()`

No C, a função `main()` retorna um valor inteiro (`int`), que informa ao sistema operacional se o programa foi executado com sucesso ou se ocorreu um erro.

- `return 0;` → Indica que o programa terminou **com sucesso**.
- `return 1;` → Indica que houve um **erro na execução**.

💡 **Dica:** Normalmente, usamos `return 0;` para indicar que o programa rodou corretamente e valores diferentes de zero (`return 1;`, `return -1;`, etc.) para indicar falhas específicas.
