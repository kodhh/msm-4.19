ifeq ($(CONFIG_MSMB_CAMERA_V2_MARKW),y)
ccflags-y += -I $(srctree)/techpack/camera_v2_markw
ccflags-y += -I $(srctree)/techpack/camera_v2_markw/isp
subdir-ccflags-y += -I $(srctree)/techpack/camera_v2_markw
subdir-ccflags-y += -I $(srctree)/techpack/camera_v2_markw/camera
subdir-ccflags-y += -I $(srctree)/techpack/camera_v2_markw/common
subdir-ccflags-y += -I $(srctree)/techpack/camera_v2_markw/fd
subdir-ccflags-y += -I $(srctree)/techpack/camera_v2_markw/isp
subdir-ccflags-y += -I $(srctree)/techpack/camera_v2_markw/ispif
subdir-ccflags-y += -I $(srctree)/techpack/camera_v2_markw/jpeg_10
subdir-ccflags-y += -I $(srctree)/techpack/camera_v2_markw/jpeg_dma
subdir-ccflags-y += -I $(srctree)/techpack/camera_v2_markw/msm_buf_mgr
subdir-ccflags-y += -I $(srctree)/techpack/camera_v2_markw/msm_vb2
subdir-ccflags-y += -I $(srctree)/techpack/camera_v2_markw/pproc
subdir-ccflags-y += -I $(srctree)/techpack/camera_v2_markw/pproc/cpp
subdir-ccflags-y += -I $(srctree)/techpack/camera_v2_markw/pproc/vpe
subdir-ccflags-y += -I $(srctree)/techpack/camera_v2_markw/sensor
subdir-ccflags-y += -I $(srctree)/techpack/camera_v2_markw/sensor/actuator
subdir-ccflags-y += -I $(srctree)/techpack/camera_v2_markw/sensor/cci
subdir-ccflags-y += -I $(srctree)/techpack/camera_v2_markw/sensor/csid
subdir-ccflags-y += -I $(srctree)/techpack/camera_v2_markw/sensor/csiphy
subdir-ccflags-y += -I $(srctree)/techpack/camera_v2_markw/sensor/eeprom
subdir-ccflags-y += -I $(srctree)/techpack/camera_v2_markw/sensor/flash
subdir-ccflags-y += -I $(srctree)/techpack/camera_v2_markw/sensor/io
subdir-ccflags-y += -I $(srctree)/techpack/camera_v2_markw/sensor/ois

ccflags-y += $(DISABLE_CFI_CLANG) $(DISABLE_LTO_CLANG)

# Use USERINCLUDE when you must reference the UAPI directories only.
USERINCLUDE     += \
                -I$(srctree)/techpack/camera_v2_markw/include/uapi \

# Use LINUXINCLUDE when you must reference the include/ directory.
# Needed to be compatible with the O= option
LINUXINCLUDE    += \
                -I$(srctree)/techpack/camera_v2_markw/include \
                -I$(srctree)/techpack/camera_v2_markw/include/uapi

obj-$(CONFIG_MSMB_CAMERA_V2_MARKW) += init.o

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
