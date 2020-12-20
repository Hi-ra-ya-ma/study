import aspida from '@aspida/fetch'
import api from '~/server/api/$api'

export const apiClient = api((process as { browser?: boolean }).browser ? (aspida as any).default() : require('@aspida/node-fetch').default(require('node-fetch')))
