#pragma once

#include <util/container/slice.h>

template <typename TContainer, typename TDelimiter>
TSlice<TContainer, TDelimiter> Slice(TContainer&& container, const TDelimiter& delimiter) {
    return {std::forward<TContainer>(container), delimiter};
}