# 删除旧文件（如果存在）
Remove-Item "E:\github\qmk_port_ch582\qmk_porting\keyboards\mk01\wireless\wireless.c" -Force -ErrorAction SilentlyContinue

# 创建 wireless.c 文件（包含所有必要函数）
@'
#include <stdint.h>
#include <stdbool.h>
#include "CH58xBLE_LIB.h"

// ========== Delay functions ==========
void mDelayuS(uint16_t us) {
    volatile uint32_t i;
    for (i = 0; i < us * 10; i++) {
        __asm__ volatile ("nop");
    }
}

void mDelaymS(uint16_t ms) {
    for (uint16_t i = 0; i < ms; i++) {
        mDelayuS(1000);
    }
}

// ========== Wireless indicator functions ==========
void wireless_indicator_daemon(void) {}
void wireless_rgb_indicator_task(void) {}
void wireless_indicator_status_reset(void) {}
void wireless_pre_process_record_kb(void) {}
bool wireless_process_record(void) { return false; }
void process_ble_passcode(void) {}

// ========== Bluetooth protocol interface ==========
extern const void *ch582_protocol_ble;
const void *ch582_protocol_ble = NULL;
'@ | Out-File -FilePath "E:\github\qmk_port_ch582\qmk_porting\keyboards\mk01\wireless\wireless.c" -Encoding UTF8

# 确认文件已创建
Write-Host "=== File created ==="
Get-ChildItem "E:\github\qmk_port_ch582\qmk_porting\keyboards\mk01\wireless\*.c"

# 显示文件内容前几行
Write-Host "=== File content (first 10 lines) ==="
Get-Content "E:\github\qmk_port_ch582\qmk_porting\keyboards\mk01\wireless\wireless.c" -Head 10

# 提交到 Git
Write-Host "=== Adding to Git ==="
git add qmk_porting/keyboards/mk01/wireless/wireless.c

# 查看状态
git status

# 提交
Write-Host "=== Committing ==="
git commit -m "Add wireless.c with delay and wireless functions"

# 推送
Write-Host "=== Pushing to GitHub ==="
git push origin via

Write-Host "=== Done! ==="