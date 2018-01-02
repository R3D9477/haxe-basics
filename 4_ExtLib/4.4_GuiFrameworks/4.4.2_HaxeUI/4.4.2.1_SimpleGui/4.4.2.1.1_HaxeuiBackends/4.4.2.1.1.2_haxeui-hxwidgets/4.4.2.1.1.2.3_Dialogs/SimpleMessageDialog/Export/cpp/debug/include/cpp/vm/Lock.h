// GeneratedByHaxe
#ifndef INCLUDED_cpp_vm_Lock
#define INCLUDED_cpp_vm_Lock

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_e48612af511670b0_28_new)
HX_DECLARE_CLASS2(cpp,vm,Lock)

namespace cpp{
namespace vm{


class HXCPP_CLASS_ATTRIBUTES Lock_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Lock_obj OBJ_;
		Lock_obj();

	public:
		enum { _hx_ClassId = 0x5475e2e5 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="cpp.vm.Lock")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"cpp.vm.Lock"); }

		hx::ObjectPtr< Lock_obj > __new() {
			hx::ObjectPtr< Lock_obj > __this = new Lock_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Lock_obj > __alloc(hx::Ctx *_hx_ctx) {
			Lock_obj *__this = (Lock_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Lock_obj), true, "cpp.vm.Lock"));
			*(void **)__this = Lock_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_e48612af511670b0_28_new)
HXDLIN(  28)		( ( ::cpp::vm::Lock)(__this) )->l = ::__hxcpp_lock_create();
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Lock_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Lock","\x0b","\xc8","\x90","\x32"); }

		 ::Dynamic l;
		bool wait( ::Dynamic timeout);
		::Dynamic wait_dyn();

};

} // end namespace cpp
} // end namespace vm

#endif /* INCLUDED_cpp_vm_Lock */ 
