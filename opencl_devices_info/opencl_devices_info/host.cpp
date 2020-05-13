#include <iostream>
#include <CL/cl.hpp>

using namespace std;

void platform_info(cl::Platform platform);
void device_info(cl::Device device);
void print_devices_data();



int main()
{
	print_devices_data();
	return 0;
}


void platform_info(cl::Platform platform)
{
	std::cout << "CL_PLATFORM_NAME: " << platform.getInfo<CL_PLATFORM_NAME>() << "\n";
	std::cout << "CL_PLATFORM_PROFILE " << platform.getInfo<CL_PLATFORM_PROFILE>() << "\n";
	std::cout << "CL_PLATFORM_VERSION: " << platform.getInfo<CL_PLATFORM_VERSION>() << "\n";
	std::cout << "CL_PLATFORM_VENDOR: " << platform.getInfo<CL_PLATFORM_VENDOR>() << "\n";
	std::cout << "CL_PLATFORM_EXTENSIONS: " << platform.getInfo<CL_PLATFORM_EXTENSIONS>() << "\n";
}

void device_info(cl::Device device)
{
	std::cout << "CL_DEVICE_NAME: " << device.getInfo<CL_DEVICE_NAME>() << "\n";

	/* cl_device_info */
	std::cout << "CL_DEVICE_TYPE : " << device.getInfo<CL_DEVICE_TYPE>() << "\n";
	std::cout << "CL_DEVICE_VENDOR : " << device.getInfo<CL_DEVICE_VENDOR>() << "\n";
	std::cout << "CL_DEVICE_VENDOR_ID : " << device.getInfo<CL_DEVICE_VENDOR_ID>() << "\n";
	std::cout << "CL_DEVICE_MAX_COMPUTE_UNITS : " << device.getInfo<CL_DEVICE_MAX_COMPUTE_UNITS>() << "\n";
	std::cout << "CL_DEVICE_MAX_WORK_ITEM_DIMENSIONS : " << device.getInfo<CL_DEVICE_MAX_WORK_ITEM_DIMENSIONS>() << "\n";
	std::cout << "CL_DEVICE_MAX_WORK_GROUP_SIZE : " << device.getInfo<CL_DEVICE_MAX_WORK_GROUP_SIZE>() << "\n";
	std::cout << "CL_DEVICE_PREFERRED_VECTOR_WIDTH_CHAR : " << device.getInfo<CL_DEVICE_PREFERRED_VECTOR_WIDTH_CHAR>() << "\n";
	std::cout << "CL_DEVICE_PREFERRED_VECTOR_WIDTH_SHORT : " << device.getInfo<CL_DEVICE_PREFERRED_VECTOR_WIDTH_SHORT>() << "\n";
	std::cout << "CL_DEVICE_PREFERRED_VECTOR_WIDTH_INT : " << device.getInfo<CL_DEVICE_PREFERRED_VECTOR_WIDTH_INT>() << "\n";
	std::cout << "CL_DEVICE_PREFERRED_VECTOR_WIDTH_LONG : " << device.getInfo<CL_DEVICE_PREFERRED_VECTOR_WIDTH_LONG>() << "\n";
	std::cout << "CL_DEVICE_PREFERRED_VECTOR_WIDTH_FLOAT : " << device.getInfo<CL_DEVICE_PREFERRED_VECTOR_WIDTH_FLOAT>() << "\n";
	std::cout << "CL_DEVICE_PREFERRED_VECTOR_WIDTH_DOUBLE : " << device.getInfo<CL_DEVICE_PREFERRED_VECTOR_WIDTH_DOUBLE>() << "\n";
	std::cout << "CL_DEVICE_MAX_CLOCK_FREQUENCY : " << device.getInfo<CL_DEVICE_MAX_CLOCK_FREQUENCY>() << "\n";
	std::cout << "CL_DEVICE_ADDRESS_BITS : " << device.getInfo<CL_DEVICE_ADDRESS_BITS>() << "\n";
	std::cout << "CL_DEVICE_MAX_READ_IMAGE_ARGS : " << device.getInfo<CL_DEVICE_MAX_READ_IMAGE_ARGS>() << "\n";
	std::cout << "CL_DEVICE_MAX_WRITE_IMAGE_ARGS : " << device.getInfo<CL_DEVICE_MAX_WRITE_IMAGE_ARGS>() << "\n";
	std::cout << "CL_DEVICE_MAX_MEM_ALLOC_SIZE : " << device.getInfo<CL_DEVICE_MAX_MEM_ALLOC_SIZE>() << "\n";
	std::cout << "CL_DEVICE_IMAGE2D_MAX_WIDTH : " << device.getInfo<CL_DEVICE_IMAGE2D_MAX_WIDTH>() << "\n";
	std::cout << "CL_DEVICE_IMAGE2D_MAX_HEIGHT : " << device.getInfo<CL_DEVICE_IMAGE2D_MAX_HEIGHT>() << "\n";
	std::cout << "CL_DEVICE_IMAGE3D_MAX_WIDTH : " << device.getInfo<CL_DEVICE_IMAGE3D_MAX_WIDTH>() << "\n";
	std::cout << "CL_DEVICE_IMAGE3D_MAX_HEIGHT : " << device.getInfo<CL_DEVICE_IMAGE3D_MAX_HEIGHT>() << "\n";
	std::cout << "CL_DEVICE_IMAGE3D_MAX_DEPTH : " << device.getInfo<CL_DEVICE_IMAGE3D_MAX_DEPTH>() << "\n";
	std::cout << "CL_DEVICE_IMAGE_SUPPORT : " << device.getInfo<CL_DEVICE_IMAGE_SUPPORT>() << "\n";
	std::cout << "CL_DEVICE_MAX_PARAMETER_SIZE : " << device.getInfo<CL_DEVICE_MAX_PARAMETER_SIZE>() << "\n";
	std::cout << "CL_DEVICE_MAX_SAMPLERS : " << device.getInfo<CL_DEVICE_MAX_SAMPLERS>() << "\n";
	std::cout << "CL_DEVICE_MEM_BASE_ADDR_ALIGN : " << device.getInfo<CL_DEVICE_MEM_BASE_ADDR_ALIGN>() << "\n";
	std::cout << "CL_DEVICE_MIN_DATA_TYPE_ALIGN_SIZE : " << device.getInfo<CL_DEVICE_MIN_DATA_TYPE_ALIGN_SIZE>() << "\n";
	std::cout << "CL_DEVICE_SINGLE_FP_CONFIG : " << device.getInfo<CL_DEVICE_SINGLE_FP_CONFIG>() << "\n";
	std::cout << "CL_DEVICE_GLOBAL_MEM_CACHE_TYPE : " << device.getInfo<CL_DEVICE_GLOBAL_MEM_CACHE_TYPE>() << "\n";
	std::cout << "CL_DEVICE_GLOBAL_MEM_CACHELINE_SIZE : " << device.getInfo<CL_DEVICE_GLOBAL_MEM_CACHELINE_SIZE>() << "\n";
	std::cout << "CL_DEVICE_GLOBAL_MEM_CACHE_SIZE : " << device.getInfo<CL_DEVICE_GLOBAL_MEM_CACHE_SIZE>() << "\n";
	std::cout << "CL_DEVICE_GLOBAL_MEM_SIZE : " << device.getInfo<CL_DEVICE_GLOBAL_MEM_SIZE>() << "\n";
	std::cout << "CL_DEVICE_MAX_CONSTANT_BUFFER_SIZE : " << device.getInfo<CL_DEVICE_MAX_CONSTANT_BUFFER_SIZE>() << "\n";
	std::cout << "CL_DEVICE_MAX_CONSTANT_ARGS : " << device.getInfo<CL_DEVICE_MAX_CONSTANT_ARGS>() << "\n";
	std::cout << "CL_DEVICE_LOCAL_MEM_TYPE : " << device.getInfo<CL_DEVICE_LOCAL_MEM_TYPE>() << "\n";
	std::cout << "CL_DEVICE_LOCAL_MEM_SIZE : " << device.getInfo<CL_DEVICE_LOCAL_MEM_SIZE>() << "\n";
	std::cout << "CL_DEVICE_ERROR_CORRECTION_SUPPORT : " << device.getInfo<CL_DEVICE_ERROR_CORRECTION_SUPPORT>() << "\n";
	std::cout << "CL_DEVICE_PROFILING_TIMER_RESOLUTION : " << device.getInfo<CL_DEVICE_PROFILING_TIMER_RESOLUTION>() << "\n";
	std::cout << "CL_DEVICE_ENDIAN_LITTLE : " << device.getInfo<CL_DEVICE_ENDIAN_LITTLE>() << "\n";
	std::cout << "CL_DEVICE_AVAILABLE : " << device.getInfo<CL_DEVICE_AVAILABLE>() << "\n";
	std::cout << "CL_DEVICE_COMPILER_AVAILABLE : " << device.getInfo<CL_DEVICE_COMPILER_AVAILABLE>() << "\n";
	std::cout << "CL_DEVICE_EXECUTION_CAPABILITIES : " << device.getInfo<CL_DEVICE_EXECUTION_CAPABILITIES>() << "\n";
	std::cout << "CL_DEVICE_QUEUE_PROPERTIES : " << device.getInfo<CL_DEVICE_QUEUE_PROPERTIES>() << "\n";
	//std::cout << "CL_DEVICE_QUEUE_ON_HOST_PROPERTIES : " << device.getInfo<CL_DEVICE_QUEUE_ON_HOST_PROPERTIES>() << "\n";
	//std::cout << "CL_DEVICE_NAME : " << device.getInfo<CL_DEVICE_NAME>() << "\n";
	//std::cout << "CL_DEVICE_VENDOR : " << device.getInfo<CL_DEVICE_VENDOR>() << "\n";
	std::cout << "CL_DRIVER_VERSION : " << device.getInfo<CL_DRIVER_VERSION>() << "\n";
	std::cout << "CL_DEVICE_PROFILE : " << device.getInfo<CL_DEVICE_PROFILE>() << "\n";
	std::cout << "CL_DEVICE_VERSION : " << device.getInfo<CL_DEVICE_VERSION>() << "\n";
	std::cout << "CL_DEVICE_EXTENSIONS : " << device.getInfo<CL_DEVICE_EXTENSIONS>() << "\n";
	std::cout << "CL_DEVICE_PLATFORM : " << device.getInfo<CL_DEVICE_PLATFORM>() << "\n";
	std::cout << "CL_DEVICE_DOUBLE_FP_CONFIG : " << device.getInfo<CL_DEVICE_DOUBLE_FP_CONFIG>() << "\n";
	/* 0x1033 reserved for CL_DEVICE_HALF_FP_CONFIG */
	std::cout << "CL_DEVICE_PREFERRED_VECTOR_WIDTH_HALF : " << device.getInfo<CL_DEVICE_PREFERRED_VECTOR_WIDTH_HALF>() << "\n";
	std::cout << "CL_DEVICE_HOST_UNIFIED_MEMORY : " << device.getInfo<CL_DEVICE_HOST_UNIFIED_MEMORY>() << "\n";
	std::cout << "CL_DEVICE_NATIVE_VECTOR_WIDTH_CHAR : " << device.getInfo<CL_DEVICE_NATIVE_VECTOR_WIDTH_CHAR>() << "\n";
	std::cout << "CL_DEVICE_NATIVE_VECTOR_WIDTH_SHORT : " << device.getInfo<CL_DEVICE_NATIVE_VECTOR_WIDTH_SHORT>() << "\n";
	std::cout << "CL_DEVICE_NATIVE_VECTOR_WIDTH_INT : " << device.getInfo<CL_DEVICE_NATIVE_VECTOR_WIDTH_INT>() << "\n";
	std::cout << "CL_DEVICE_NATIVE_VECTOR_WIDTH_LONG : " << device.getInfo<CL_DEVICE_NATIVE_VECTOR_WIDTH_LONG>() << "\n";
	std::cout << "CL_DEVICE_NATIVE_VECTOR_WIDTH_FLOAT : " << device.getInfo<CL_DEVICE_NATIVE_VECTOR_WIDTH_FLOAT>() << "\n";
	std::cout << "CL_DEVICE_NATIVE_VECTOR_WIDTH_DOUBLE : " << device.getInfo<CL_DEVICE_NATIVE_VECTOR_WIDTH_DOUBLE>() << "\n";
	std::cout << "CL_DEVICE_NATIVE_VECTOR_WIDTH_HALF : " << device.getInfo<CL_DEVICE_NATIVE_VECTOR_WIDTH_HALF>() << "\n";
	std::cout << "CL_DEVICE_OPENCL_C_VERSION : " << device.getInfo<CL_DEVICE_OPENCL_C_VERSION>() << "\n";
	std::cout << "CL_DEVICE_BUILT_IN_KERNELS : " << device.getInfo<CL_DEVICE_BUILT_IN_KERNELS>() << "\n";
	std::cout << "CL_DEVICE_PARENT_DEVICE : " << device.getInfo<CL_DEVICE_PARENT_DEVICE>() << "\n";
	std::cout << "CL_DEVICE_PARTITION_AFFINITY_DOMAIN : " << device.getInfo<CL_DEVICE_PARTITION_AFFINITY_DOMAIN>() << "\n";
	std::cout << "CL_DEVICE_REFERENCE_COUNT : " << device.getInfo<CL_DEVICE_REFERENCE_COUNT>() << "\n";
	std::cout << "CL_DEVICE_PREFERRED_INTEROP_USER_SYNC : " << device.getInfo<CL_DEVICE_PREFERRED_INTEROP_USER_SYNC>() << "\n";
}


void print_devices_data()
{
	//get all platforms (drivers)
	std::vector<cl::Platform> all_platforms;
	cl::Platform::get(&all_platforms);
	if (all_platforms.size() == 0) {
		std::cout << " No platforms found. Check OpenCL installation!\n";
		exit(1);
	}
	for (int i = 0; i < all_platforms.size(); i++)
	{
		platform_info(all_platforms[i]);
		std::vector<cl::Device> all_devices;
		all_platforms[i].getDevices(CL_DEVICE_TYPE_ALL, &all_devices);
		if (all_devices.size() == 0) {
			std::cout << " No devices found. Check OpenCL installation!\n";
			exit(1);
		}
		cout << endl << endl;

		for (int i = 0; i < all_devices.size(); i++)
		{
			device_info(all_devices[i]);
			cout << endl;
		}
		cout << endl << endl;
	}
}