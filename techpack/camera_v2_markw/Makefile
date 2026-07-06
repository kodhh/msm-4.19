ifeq ($(CONFIG_MSMB_CAMERA_V2_MARKW),y)
ccflags-y += -I $(srctree)/techpack/camera_v2_markw
ccflags-y += -I $(srctree)/techpack/camera_v2_markw/sensor
ccflags-y += -I $(srctree)/techpack/camera_v2_markw/isp
ccflags-y += -I $(srctree)/techpack/camera_v2_markw/pproc
ccflags-y += -I $(srctree)/techpack/camera_v2_markw/msm_vb2
ccflags-y += -I $(srctree)/techpack/camera_v2_markw/camera
ccflags-y += -I $(srctree)/techpack/camera_v2_markw/jpeg_10
ccflags-y += -I $(srctree)/techpack/camera_v2_markw/jpeg_dma
ccflags-y += -I $(srctree)/techpack/camera_v2_markw/fd
ccflags-y += -I $(srctree)/techpack/camera_v2_markw/common

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
