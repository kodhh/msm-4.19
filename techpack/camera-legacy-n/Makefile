ifeq ($(CONFIG_MSMB_CAMERA_LEGACY_N),y)
ccflags-y += -I $(srctree)/techpack/camera-legacy-n
ccflags-y += -I $(srctree)/techpack/camera-legacy-n/isp
subdir-ccflags-y += -I $(srctree)/techpack/camera-legacy-n
subdir-ccflags-y += -I $(srctree)/techpack/camera-legacy-n/camera
subdir-ccflags-y += -I $(srctree)/techpack/camera-legacy-n/common
subdir-ccflags-y += -I $(srctree)/techpack/camera-legacy-n/fd
subdir-ccflags-y += -I $(srctree)/techpack/camera-legacy-n/isp
subdir-ccflags-y += -I $(srctree)/techpack/camera-legacy-n/ispif
subdir-ccflags-y += -I $(srctree)/techpack/camera-legacy-n/jpeg_10
subdir-ccflags-y += -I $(srctree)/techpack/camera-legacy-n/jpeg_dma
subdir-ccflags-y += -I $(srctree)/techpack/camera-legacy-n/msm_buf_mgr
subdir-ccflags-y += -I $(srctree)/techpack/camera-legacy-n/msm_vb2
subdir-ccflags-y += -I $(srctree)/techpack/camera-legacy-n/pproc
subdir-ccflags-y += -I $(srctree)/techpack/camera-legacy-n/pproc/cpp
subdir-ccflags-y += -I $(srctree)/techpack/camera-legacy-n/pproc/vpe
subdir-ccflags-y += -I $(srctree)/techpack/camera-legacy-n/sensor
subdir-ccflags-y += -I $(srctree)/techpack/camera-legacy-n/sensor/actuator
subdir-ccflags-y += -I $(srctree)/techpack/camera-legacy-n/sensor/cci
subdir-ccflags-y += -I $(srctree)/techpack/camera-legacy-n/sensor/csid
subdir-ccflags-y += -I $(srctree)/techpack/camera-legacy-n/sensor/csiphy
subdir-ccflags-y += -I $(srctree)/techpack/camera-legacy-n/sensor/eeprom
subdir-ccflags-y += -I $(srctree)/techpack/camera-legacy-n/sensor/flash
subdir-ccflags-y += -I $(srctree)/techpack/camera-legacy-n/sensor/io
subdir-ccflags-y += -I $(srctree)/techpack/camera-legacy-n/sensor/ir_cut
subdir-ccflags-y += -I $(srctree)/techpack/camera-legacy-n/sensor/ir_led
subdir-ccflags-y += -I $(srctree)/techpack/camera-legacy-n/sensor/ois

ccflags-y += $(DISABLE_CFI_CLANG) $(DISABLE_LTO_CLANG)

# Use USERINCLUDE when you must reference the UAPI directories only.
USERINCLUDE     += \
                -I$(srctree)/techpack/camera-legacy-n/include/uapi \

# Use LINUXINCLUDE when you must reference the include/ directory.
# Needed to be compatible with the O= option
LINUXINCLUDE    += \
                -I$(srctree)/techpack/camera-legacy-n/include \
                -I$(srctree)/techpack/camera-legacy-n/include/uapi

obj-$(CONFIG_MSMB_CAMERA_LEGACY_N) += init.o

obj-$(CONFIG_MSMB_CAMERA) += common/
obj-$(CONFIG_MSMB_CAMERA) += msm.o
obj-$(CONFIG_MSMB_CAMERA) += camera/
obj-$(CONFIG_MSMB_CAMERA) += msm_vb2/
obj-$(CONFIG_MSMB_CAMERA) += sensor/
obj-$(CONFIG_MSMB_CAMERA) += pproc/
obj-$(CONFIG_MSMB_CAMERA) += isp/
obj-$(CONFIG_MSMB_CAMERA) += ispif/
obj-$(CONFIG_MSMB_JPEG) += jpeg_10/
obj-$(CONFIG_MSM_JPEGDMA) += jpeg_dma/
obj-$(CONFIG_MSMB_CAMERA) += msm_buf_mgr/
obj-$(CONFIG_MSM_FD) += fd/
else
ccflags-y := -Wno-unused-function
obj-y := stub.o
endif
