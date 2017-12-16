// GeneratedByHaxe
#ifndef INCLUDED_IntIterator
#define INCLUDED_IntIterator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_38f1b201f6b11cab_46_new)
HX_DECLARE_CLASS0(IntIterator)



class HXCPP_CLASS_ATTRIBUTES IntIterator_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef IntIterator_obj OBJ_;
		IntIterator_obj();

	public:
		enum { _hx_ClassId = 0x621bb1dd };

		void __construct(int min,int max);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="IntIterator")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"IntIterator"); }

		hx::ObjectPtr< IntIterator_obj > __new(int min,int max) {
			hx::ObjectPtr< IntIterator_obj > __this = new IntIterator_obj();
			__this->__construct(min,max);
			return __this;
		}

		static hx::ObjectPtr< IntIterator_obj > __alloc(hx::Ctx *_hx_ctx,int min,int max) {
			IntIterator_obj *__this = (IntIterator_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(IntIterator_obj), false, "IntIterator"));
			*(void **)__this = IntIterator_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_38f1b201f6b11cab_46_new)
HXLINE(  47)		( ( ::IntIterator)(__this) )->min = min;
HXLINE(  48)		( ( ::IntIterator)(__this) )->max = max;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~IntIterator_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("IntIterator","\xdd","\xb1","\x1b","\x62"); }

		int min;
		int max;
		bool hasNext();
		::Dynamic hasNext_dyn();

		int next();
		::Dynamic next_dyn();

};


#endif /* INCLUDED_IntIterator */ 
