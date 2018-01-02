// GeneratedByHaxe
#ifndef INCLUDED_cpp_vm_Thread
#define INCLUDED_cpp_vm_Thread

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(cpp,vm,Thread)

namespace cpp{
namespace vm{


class HXCPP_CLASS_ATTRIBUTES Thread_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Thread_obj OBJ_;
		Thread_obj();

	public:
		enum { _hx_ClassId = 0x69432498 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="cpp.vm.Thread")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"cpp.vm.Thread"); }

		hx::ObjectPtr< Thread_obj > __new() {
			hx::ObjectPtr< Thread_obj > __this = new Thread_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Thread_obj > __alloc(hx::Ctx *_hx_ctx) {
			Thread_obj *__this = (Thread_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Thread_obj), true, "cpp.vm.Thread"));
			*(void **)__this = Thread_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Thread_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Thread","\xea","\xee","\x4d","\xc3"); }

		 ::Dynamic handle;
		virtual int __compare( ::Dynamic t);
		::Dynamic __compare_dyn();

};

} // end namespace cpp
} // end namespace vm

#endif /* INCLUDED_cpp_vm_Thread */ 
