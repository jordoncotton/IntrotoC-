#include "nodetype.h"

template<typename type>
inline node<type>::node()
{

}

template<typename type>
node<type>::node(node<type>)
{

}

template<typename type>
type node<type>::operator*()
{
	return type();
}

template<typename type>
node<type> node<type>::operator++()
{
	return ;
}

template<typename type>
const bool node<type>::operator==(const node<type>&)
{
	return false;
}

template<typename type>
const bool node<type>::operator!=(const node<type>&)
{
	return false;
}
