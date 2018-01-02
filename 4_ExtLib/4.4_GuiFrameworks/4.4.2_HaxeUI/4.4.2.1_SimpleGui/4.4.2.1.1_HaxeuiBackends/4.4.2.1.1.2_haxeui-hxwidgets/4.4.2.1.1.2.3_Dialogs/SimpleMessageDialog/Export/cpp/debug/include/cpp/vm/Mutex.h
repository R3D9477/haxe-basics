// GeneratedByHaxe
#ifndef INCLUDED_cpp_vm_Mutex
#define INCLUDED_cpp_vm_Mutex

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_76855d4db60a73b0_28_new)
HX_DECLARE_CLASS2(cpp,vm,Mutex)

namespace cpp{
namespace vm{


class HXCPP_CLASS_ATTRIBUTES Mutex_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Mutex_obj OBJ_;
		Mutex_obj();

	public:
		enum { _hx_ClassId = 0x2a1b6345 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="cpp.vm.Mutex")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"cpp.vm.Mutex"); }

		hx::ObjectPtr< Mutex_obj > __new() {
			hx::ObjectPtr< Mutex_obj > __this = new Mutex_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Mutex_obj > __alloc(hx::Ctx *_hx_ctx) {
			Mutex_obj *__this = (Mutex_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Mutex_obj), true, "cpp.vm.Mutex"));
			*(void **)__this = Mutex_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_76855d4db60a73b0_28_new)
HXDLIN(  28)		( ( ::cpp::vm::Mutex)(__this) )->m = ::__hxcpp_mutex_create();
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Mutex_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Mutex","\x5f","\xff","\x88","\xa3"); }

		 ::Dynamic m;
		void acquire();
		::Dynamic acquire_dyn();

		void release();
		::Dynamic release_dyn();

};

} // end namespace cpp
} // end namespace vm

#endif /* INCLUDED_cpp_vm_Mutex */ 
