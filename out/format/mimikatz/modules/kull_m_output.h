# 1 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/kull_m_output.h"





       
#include "globals.h"
#include <io.h>
#include <fcntl.h>

FILE * logfile;
#if !defined(MIMIKATZ_W2000_SUPPORT)
wchar_t * outputBuffer;
size_t outputBufferElements, outputBufferElementsPosition;
#endif

void kprintf(PCWCHAR format, ...);
void kprintf_inputline(PCWCHAR format, ...);

BOOL kull_m_output_file(PCWCHAR file);

void kull_m_output_init();
void kull_m_output_clean();
