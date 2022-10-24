#include <cstddef>
#include <cstdlib>

size_t getSize();
void *allocate(int size) {
  void *result = malloc(size);
  return result;
}

int main() {
  size_t size = getSize();
}

//allocate(int):
//                movsx   rdi, edi
//                jmp     malloc
//main:
//    sub     rsp, 8
//            call    getSize()
//            xor     eax, eax
//    add     rsp, 8
//    ret