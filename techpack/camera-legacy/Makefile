ifeq ($(CONFIG_MSMB_CAMERA_LEGACY),y)
ccflags-y += -I $(srctree)/techpack/camera-legacy
ccflags-y += -I $(srctree)/techpack/camera-legacy/isp
subdir-ccflags-y += -I $(srctree)/techpack/camera-legacy
subdir-ccflags-y += -I $(srctree)/techpack/camera-legacy/camera
subdir-ccflags-y += -I $(srctree)/techpack/camera-legacy/common
subdir-ccflags-y += -I $(srctree)/techpack/camera-legacy/fd
subdir-ccflags-y += -I $(srctree)/techpack/camera-legacy/isp
subdir-ccflags-y += -I $(srctree)/techpack/camera-legacy/ispif
subdir-ccflags-y += -I $(srctree)/techpack/camera-legacy/jpeg_10
subdir-ccflags-y += -I $(srctree)/techpack/camera-legacy/jpeg_dma
subdir-ccflags-y += -I $(srctree)/techpack/camera-legacy/msm_buf_mgr
subdir-ccflags-y += -I $(srctree)/techpack/camera-legacy/msm_vb2
subdir-ccflags-y += -I $(srctree)/techpack/camera-legacy/pproc
subdir-ccflags-y += -I $(srctree)/techpack/camera-legacy/pproc/cpp
subdir-ccflags-y += -I $(srctree)/techpack/camera-legacy/pproc/vpe
subdir-ccflags-y += -I $(srctree)/techpack/camera-legacy/sensor
subdir-ccflags-y += -I $(srctree)/techpack/camera-legacy/sensor/actuator
subdir-ccflags-y += -I $(srctree)/techpack/camera-legacy/sensor/cci
subdir-ccflags-y += -I $(srctree)/techpack/camera-legacy/sensor/csid
subdir-ccflags-y += -I $(srctree)/techpack/camera-legacy/sensor/csiphy
subdir-ccflags-y += -I $(srctree)/techpack/camera-legacy/sensor/eeprom
subdir-ccflags-y += -I $(srctree)/techpack/camera-legacy/sensor/flash
subdir-ccflags-y += -I $(srctree)/techpack/camera-legacy/sensor/io
subdir-ccflags-y += -I $(srctree)/techpack/camera-legacy/sensor/ir_cut
subdir-ccflags-y += -I $(srctree)/techpack/camera-legacy/sensor/ir_led
subdir-ccflags-y += -I $(srctree)/techpack/camera-legacy/sensor/ois

ccflags-y += $(DISABLE_CFI_CLANG) $(DISABLE_LTO_CLANG)

# Use USERINCLUDE when you must reference the UAPI directories only.
USERINCLUDE     += \
                -I$(srctree)/techpack/camera-legacy/include/uapi \

# Use LINUXINCLUDE when you must reference the include/ directory.
# Needed to be compatible with the O= option
LINUXINCLUDE    += \
                -I$(srctree)/techpack/camera-legacy/include \
                -I$(srctree)/techpack/camera-legacy/include/uapi

obj-$(CONFIG_MSMB_CAMERA_LEGACY) += init.o

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
