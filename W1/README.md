# Memory Management - Week 1
## Description: 
Chương trình memory_lab.c tái hiện ba lỗi bộ nhớ kinh điển: Stack Overflow, Memory Leak, và Out of Memory.

### Stack overflow:
Stack là một vùng nhớ có kích thước cố định và rất nhỏ. Lỗi Stack Overflow xảy ra khi
"chồng đĩa" này cao đến mức bị đổ
- Đệ quy vô hạn (Infinite/Deep Recursion)
- Khai báo biến cục bộ quá lớn (Large Local Variables)
  
### Memory leak:
Lỗi xảy ra trên vùng heap
- Không giải phóng bộ nhớ đã cấp phát trước khi chương trình kết thúc
  
### Out of memory:
OOM xảy ra khi chương trình của bạn cố gắng yêu cầu cấp phát một vùng nhớ (thường là trên Heap)
nhưng hệ điều hành không còn đủ bộ nhớ (RAM + swap) để cung cấp
- Hậu quả của Memory Leak
- Xử lý dữ liệu quá lớn
- Thuật toán không hiệu quả
- Phân mảnh bộ nhớ (Memory Fragmentation)
  
## Installation:
```bash
# Step 1: Clone the repository
git clone https://github.com/DPhong0304/Assignment-CPRO.git

# Step 2: Navigate to Week 1 folder
cd W1/

# Step 3: Build the program
make

```

## Run:
```bash
# Using make
make stack_overflow
make memory_leak
make out_of_memory

# Or directly
./memory_lab stack_overflow
./memory_lab memory_leak
./memory_lab out_of_memory

```

