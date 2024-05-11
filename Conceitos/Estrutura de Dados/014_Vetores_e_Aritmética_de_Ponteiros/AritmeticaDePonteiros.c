--- Ao Declararmos: ---

int v[5];

- O símbolo 'v' é uma constante que representa o >endereço inicial< do vetor.
- Logo, sem indexação, v aponta (guarda a referência) para o primeiro elemento do vetor.

---> &v = v = &v[0] <---

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Se colocassemos '(v + 1)', por exemplo, estariamos deslocando o nosso ponteiro imaginário (indices do vetor) o tamanho em bytes do tipo do nosso vetor (Nesse caso int (int v (int = 4 bytes))) vezes 1 (porque adicionamos um) acima do endereço de 'v' (&v[0])

- (v+1) aponta para o endereço de memória 4 bytes acima do endereço de memória do primeiro elemento do vetor (&v, &v[0], v)

4 bytes pois o vetor é int, e int pesa 4 bytes.
Se colocassemos (v+2) seria 8 bytes acima do endereço inicial.
Se o vetor fosse do tipo long, por exemplo, (v+1) apontaria 8 bytes acima de v.

(v+1) = &v[1]
(v+2) = &v[2]
[...]

(v+n) = v + (n * type.size)

---> (v+3) == v + (3 * 4) == &v[3] <---

- Podemos pedir o conteúdo dessa expressão da mesma forma que pedimos o conteúdo de um ponteiro:

*(v+3) = v[3]
(Veja que, diferente de antes, esse caso resulta no valor de v[3], e não em seu endereço de memória.)


^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
---> EX01 para testes na prática disso <---